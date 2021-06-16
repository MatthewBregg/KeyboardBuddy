#include "Display.h"
#include "PS2.h"


void setup() {
  tft.begin();
  tft.setRotation(2);
  // Clear the screen. 
  tft.fillScreen(ILI9341_BLACK);
  tft.setCursor(0, 0);
  setupKeymaps();
  setupPS2();

  Keyboard.begin();
  tft.println("loaded");
  delay(1000);
}


// Emulate linux process of sending emoji.
// Send CTRL/SHIFT/U combo press, then release, and then send the code followed by space. 
// See codes from https://unicode-table.com/en/1F4AA/.
void send_emoji(){
  tft.println("sending emoji!");
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('u');

  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_SHIFT);
  Keyboard.release('u');
  //Keyboard.print("1f4a9"); // Poop
  Keyboard.print("1f4AA"); // Strong arm.
  Keyboard.print(" ");
}

bool caps_lock_pressed = false;
bool sent_emoji = false;

void loop() {
  if (interrupted) { tft.println("interrupted");}
  uint8_t k = getScancode();
  uint8_t k2; 
  if (k) {
    if (skip) {
      --skip;
    } else {
      if (k == 0xE0) {
        ext = true;
      } else if (k == 0xF0) {
        brk = true;
      } else if (k == 0xFA) {
        if (isSendLeds) {
          isSendLeds = false;
          sendMessage(leds);
        }
      } else {
        if (k == 0xE1) {
          k2 = 72;
          skip = 7;
          brk = true;
          addToReport(k2);
          sendReport();
        } else {
          k2 = ext ? KE[k] : K[k];
        }

        if (k2){
          if (brk){
            if (k2 == kCapsLock) {
              tft.println("Caps lock released!");
              send_emoji();
              caps_lock_pressed = false;
            } else {
              // Sending a normal character
              // HACK: Adding 93 will align k2 with normal ascii for ONLY a-z.
              // Can use this to send chars to the emoji picker!
              // Add here to send char on release, add to the "addToReport" line
              // to send char on press (and repeat).
              tft.print(char(k2+93));
              removeFromReport(k2);
            }
            if (k2 == 83 || k2 == 71){
              // The LED setting code is borked ATM,
              // so just remove it and do nothing here. 
            }
          } else {
            if (k2 == kCapsLock) {
              tft.println("Caps lock pressed!");
              caps_lock_pressed = true;
            } else {
              addToReport(k2);
            }
          }
          sendReport();
        }

        brk = false;
        ext = false;
      }
    }
  }
}
