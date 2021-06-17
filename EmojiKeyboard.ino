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

  // Give us time to display any remaining debug info.
  delay(1000);

}


// Filter on key release.
// Return true to passthrough, false to drop.
bool key_pressed_in_mode(uint8_t key) {
  // tft.print(key); tft.print(" ");
  if (key == kCapsLock) {
    caps_lock_pressed = true;
    return false;
  }
  if (caps_lock_pressed && key == kSemiColon) {
    emoji_picker_mode = true;
    power_mode = false;
    init_emoji_picker();
    render_emoji_picker();
  }
  if (caps_lock_pressed && key == kEnter) {
    power_mode = true;
    emoji_picker_mode = false;
    render_power_mode();
  }

  if (emoji_picker_mode || power_mode) {
    return false;
  }
  // If not in emoji/power mode, or entering emoji/power mode, send the code.
  return true;
}

// Filter on key release.
// Return true to passthrough, false to drop.
bool key_released_in_mode(uint8_t key) {
  if (key == kCapsLock) {
    caps_lock_pressed = false;
    if(!emoji_picker_mode && !power_mode) {
      // If we didn't enter emoji/power mode, then send our caps lock.
      Keyboard.press(KEY_CAPS_LOCK);
    }
    return false;
  }
  if (key == kESC && (emoji_picker_mode || power_mode)) {
    emoji_picker_mode = false;
    power_mode = false;
    clear_display();
    return false;
  }
  if (key == kEnter && emoji_picker_mode) {
    clear_display();
    emoji_picker_mode = false;
    send_emoji_do_lookup(emoji_name);
    tft.drawBitmap(140/2,220/2,myBitmapthumbs, 100, 100, ILI9341_YELLOW);
    return false;
  }
  
  if (emoji_picker_mode && key != kSemiColon) {
    mutate_emoji_picker_keys(key);
    render_emoji_picker();
    return false;
  }
  if (power_mode && key != kEnter) {
    SEND_POWER_KEY(key);
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
