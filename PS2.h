/**
 * The PS/2 to USB keyboard converter based on DorianRudolph's work
 * @see https://gist.github.com/DorianRudolph/ca283dfdfd185bc812b7
 * 
 * MIT licensed: https://screenshot.googleplex.com/aT7TCreYpRr
 *
 */

#include <Keyboard.h>
#include "PS2Maps.h"

#define DATA_PIN  A0 // Define DATA_PIN (PS/2 Data)
#define CLOCK_PIN A1  // Define CLOCK_PIN (PS/2 Clock). This PIN must supporting interrupts.

#define BUFFER_SIZE 45

static volatile uint8_t buffer[BUFFER_SIZE];
static volatile uint8_t head, tail;
static volatile uint8_t sendBits, msg, bitCount, setBits;
KeyReport report;
uint8_t leds;
bool isSendLeds;

void PS2Interrupt(void) {

  static uint8_t bitcount = 0;
  static uint8_t incoming = 0;
  static uint32_t prevMS = 0;
  uint32_t nowMS;
  uint8_t n, val;

  if (!sendBits){
    val = digitalRead(DATA_PIN);
    nowMS = millis();
    if (nowMS - prevMS > 250) {
      bitcount = 0;
      incoming = 0;
    }
    prevMS = nowMS;
    n = bitcount - 1;
    if (n <= 7) {
      incoming |= (val << n);
    }
    bitcount++;
    if (bitcount == 11) {
      uint8_t i = head + 1;
      if (i >= BUFFER_SIZE) i = 0;
      if (i != tail) {
        buffer[i] = incoming;
        head = i;
      }
      bitcount = 0;
      incoming = 0;
    }
  } else {
    --sendBits;
    uint8_t b = bitCount - 1;
    if (b == 8){
      digitalWrite(DATA_PIN, !(setBits & 1));
    } else if (b == 9) {
      pinMode(DATA_PIN, INPUT_PULLUP);
    } else if (b < 8) {
      bool bt = (msg >> b) & 1;
      digitalWrite(DATA_PIN,  bt);
      setBits += bt;
    }
    ++bitCount;
  }
}

static inline uint8_t getScancode(void) {
  uint8_t c, i;

  i = tail;
  if (i == head) return 0;
  i++;
  if (i >= BUFFER_SIZE) i = 0;
  c = buffer[i];
  tail = i;
  return c;
}

void setupPS2() {
  pinMode(CLOCK_PIN, INPUT_PULLUP);
  pinMode(DATA_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(CLOCK_PIN), PS2Interrupt, FALLING);

  head = 0;
  tail = 0;
  sendBits = 0;
}


bool ext, brk;
int skip;

void addToReport(uint8_t k) {
  uint8_t i;
  if (k >= 224) {
    report.modifiers |= 1 << (k - 224);
  } else if (report.keys[0] != k && report.keys[1] != k &&
             report.keys[2] != k && report.keys[3] != k &&
             report.keys[4] != k && report.keys[5] != k) {
    for (i = 0; i < 6; ++i) {
      if (report.keys[i] == 0) {
        report.keys[i] = k;
        break;
      }
    }
  }
}

void removeFromReport(uint8_t k) {
  uint8_t i;
  if (k >= 224) {
    report.modifiers &= ~(1 << (k - 224));
  } else {
    for (i = 0; i < 6; ++i) {
      if (report.keys[i] == k) {
        report.keys[i] = 0;
        break;
      }
    }
  }
}


// Copypaste from Keyboard lib
void sendReport() {
  HID().SendReport(2, &report, sizeof(KeyReport));
}

void sendMessage(uint8_t m) {
  noInterrupts();
  pinMode(CLOCK_PIN, OUTPUT);
  digitalWrite(CLOCK_PIN, LOW);
  delayMicroseconds(60);
  pinMode(CLOCK_PIN, INPUT_PULLUP);
  msg = m;
  bitCount = 0;
  sendBits = 12;
  setBits = 0;
  pinMode(DATA_PIN, OUTPUT);
  digitalWrite(DATA_PIN, LOW);
  interrupts();
}

