/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "EmojiList.h"



bool caps_lock_pressed = false;
bool sent_emoji = false;
bool emoji_picker_mode = false;
bool power_mode = false;
String emoji_name;


// Emulate linux process of sending emoji.
// Send CTRL/SHIFT/U combo press, then release, and then send the code followed by space. 
// See codes from https://unicode-table.com/en/1F4AA/.
void send_emoji(String code){
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('u');

  Keyboard.releaseAll();
  Keyboard.print("1f");
  Keyboard.print(code);
  Keyboard.print(" ");
}


void send_emoji_do_lookup(String emoji_name) {
  int index = index_matching_prefix(emoji_name);
  send_emoji(emojis[index].unicode);
}

bool first_render = true;
void init_emoji_picker() {
  emoji_name = "";
  clear_display();
  first_render = true;
}

char keycode_to_ascii_code(uint8_t key) {
  // HACK: Adding 93 will align k2 with normal ascii for ONLY a-z.
  // Can use this to send chars to the emoji picker!
  // Add here to send char on release, add to the "addToReport" line
  // to send char on press (and repeat).
  // Remember, 'a' = 97.
  return char(key+93);
}

String SEND_POWER_KEY_impl(uint8_t key) {
  char alpha = keycode_to_ascii_code(key);
  // https://www.compart.com/en/unicode/search?q=regional#characters
  switch(alpha) {
    case 'a':
      return "1e6";
    case 'b':
      return "1e7";
    case 'c':
      return "1e8";
    case 'd':
      return "1e9";
    case 'e':
      return "1ea";
    case 'f':
      return "1eb";
    case 'g':
      return "1ec";
    case 'h':
      return "1ed";
    case 'i':
      return "1ee";
    case 'j':
      return "1ef";
    case 'k':
      return "1f0";
    case 'l':
      return "1f1";
    case 'm':
      return "1f2";
    case 'n':
      return "1f3";
    case 'o':
      return "1f4";
    case 'p':
      return "1f5";
    case 'q':
      return "1f6";
    case 'r':
      return "1f7";
    case 's':
      return "1f8";
    case 't':
      return "1f9";
    case 'u':
      return "1fa";
    case 'v':
      return "1fb";
    case 'w':
      return "1fc";
    case 'x':
      return "1fd";
    case 'y':
      return "1fe";
    case 'z':
      return "1ff";
    default:
      return "";
  }
}

void SEND_POWER_KEY(uint8_t key) {
  String emoji = SEND_POWER_KEY_impl(key);
  if (emoji != "") {
    send_emoji(emoji);
    delay(50); 
    send_emoji("386");
  }
}

void render_power_mode() {
  clear_display();
  // Render the top box, displaying the currently picked emoji.
  // Hacky centering.
  tft.setTextSize(3);
  tft.println("");
  tft.setTextSize(40);
  tft.fillScreen(ILI9341_RED);
  tft.setTextColor(ILI9341_WHITE); 
  tft.print("P");
  for ( int i = 0; i != 5; ++i) {
    tft.drawFastHLine(0,304+i,240,ILI9341_YELLOW);
  }
  for ( int i = 0; i != 5; ++i) {
    tft.drawFastVLine(215+i,0,320,ILI9341_YELLOW);
  }
}



void mutate_emoji_picker_keys(uint8_t key) {
  if (key == kBackSpace) {
    emoji_name = emoji_name.substring(0,emoji_name.length()-1);
    return;
  }
  emoji_name += keycode_to_ascii_code(key);
}

const uint8_t max_emojis = 5;
const uint8_t max_line_length_size_3 = 13;


// Maybe for a future version render iteratively instead of a full refresh.
void render_emoji_picker() {
  // Render the top box, displaying the currently picked emoji.

  // Prevent the emoji name from clipping with this trick.
  emoji_name = emoji_name.substring(0,12);
  tft.setCursor(0,0);
  tft.setTextSize(3);
  tft.setTextColor(ILI9341_WHITE, ILI9341_BLACK); 
  tft.print(":");
  tft.print(emoji_name);

  // Clear out any potential reminder with spaces.
  // Another option would be, per row, to keep track of how far we wrote
  // and only overwrote what we need, but this is already fast enough to
  // avoid needing that optimization.
  String spaces;
  for (int i = 0; i <= (max_line_length_size_3-1 /* Minus 1 to account for the colon*/)
               - emoji_name.length(); ++i) {
    spaces += ' ';
  }
  tft.println(spaces);

  // Now render a line to seperate the input from each option.
  for ( int i = 0; i != 5 && first_render; ++i) {
    tft.drawFastHLine(0,25+i,240,ILI9341_YELLOW);
  }


  // Now render each option.
  int index = index_matching_prefix(emoji_name);
  if ( index == -1 ) {
    // Nothing to render, return;
    return;
  }
  int end = min(kMaxEmojiSize,index+max_emojis);
  for (int i = index; i != end; ++i) {
    // Now render this potential option!
    const String& name = emojis[i].name;
    tft.print(name);
    spaces = "";
    for (int x = 0; x < (max_line_length_size_3 - name.length()); ++x) {
      spaces += ' ';
    }
    tft.println(spaces);
    // Add more space for a line.
    tft.println("");
    // Now render a line to seperate each option.
    for ( int j = 0; j != 5 && first_render; ++j) {
      tft.drawFastHLine(0,75+48*(i-index)+j,240,ILI9341_WHITE);
    }
  }
  first_render = false; 

}

