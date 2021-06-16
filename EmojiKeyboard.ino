#include "Display.h"
#include "PS2.h"
#include "LoadImages.h"
#include "EmojiPickerUi.h"


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

  // Avoid constantly allocating/deallocating this.
  emoji_name.reserve(26);

  // // Initially the SD system
  // // SD card is pretty straightforward, a single call...
  // if(!SD.begin(5, SD_SCK_MHZ(25))) { // ESP32 requires 25 MHz limit
  //   tft.println(F("SD begin() failed"));
  //   for(;;); // Fatal error, do not continue
  // } else {
  //   tft.println(F("SD card loaded!"));
  // }

  // Give us time to display any remaining debug info.
  delay(1000);

}


// Filter on key release.
// Return true to passthrough, false to drop.
bool key_pressed_in_mode(uint8_t key) {
  if (key == kCapsLock) {
    caps_lock_pressed = true;
    return false;
  }
  if (caps_lock_pressed && key == kSemiColon) {
    emoji_picker_mode = true;
    init_emoji_picker();
    render_emoji_picker();
  }

  if (emoji_picker_mode) {
    return false;
  }
  // If not in emoji mode, or entering emoji mode, send the code.
  return true;
}

// Filter on key release.
// Return true to passthrough, false to drop.
bool key_released_in_mode(uint8_t key) {
  if (key == kCapsLock) {
    caps_lock_pressed = false;
    if(!emoji_picker_mode) {
      // If we didn't enter emoji mode, then send our caps lock.
      Keyboard.press(KEY_CAPS_LOCK);
    }
    return false;
  }
  if (key == kESC && emoji_picker_mode) {
    emoji_picker_mode = false;
    clear_display();
  }
  if (key == kEnter && emoji_picker_mode) {
    clear_display();
    emoji_picker_mode = false;
    send_emoji_do_lookup(emoji_name);
    tft.println("Sent emoji!");
  }
  
  if (emoji_picker_mode && key != kSemiColon) {
    add_emoji_picker_key(key);
    render_emoji_picker();
    return false;
  }
  return true;
}

void loop() {
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
            if (key_released_in_mode(k2)) {
              removeFromReport(k2);
            }
            if (k2 == 83 || k2 == 71){
              // The LED setting code is borked ATM,
              // so just remove it and do nothing here. 
            }
          } else {
            if (key_pressed_in_mode(k2)) {
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
