#include "EmojiList.h"

bool caps_lock_pressed = false;
bool sent_emoji = false;
bool power_mode = false;
bool emoji_picker_mode = false;
String emoji_name;


// Emulate linux process of sending emoji.
// Send CTRL/SHIFT/U combo press, then release, and then send the code followed by space. 
// See codes from https://unicode-table.com/en/1F4AA/.
void send_emoji(String code){
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('u');

  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_SHIFT);
  Keyboard.release('u');
  //Keyboard.print("1f4a9"); // Poop
  //Keyboard.print("1f4AA"); // Strong arm.
  Keyboard.print("1f");
  Keyboard.print(code);
  Keyboard.print(" ");
}


void send_emoji_do_lookup(String emoji_name) {
  int index = index_matching_prefix(emoji_name);
  send_emoji(emojis[index].unicode);
}

void init_emoji_picker() {
  emoji_name = "";
}



void add_emoji_picker_key(uint8_t key) {
  // HACK: Adding 93 will align k2 with normal ascii for ONLY a-z.
  // Can use this to send chars to the emoji picker!
  // Add here to send char on release, add to the "addToReport" line
  // to send char on press (and repeat).
  emoji_name += char(key+93);
}

const uint8_t max_emojis = 4;
// Maybe for a future version render iteratively instead of a full refresh.
void render_emoji_picker() {
  clear_display();
  // Render the top box, displaying the currently picked emoji.
  tft.setTextSize(3);
  tft.setTextColor(ILI9341_WHITE); 
  tft.print(":");
  tft.println(emoji_name);

  // Now render a line to seperate the input from each option.
  // TODO

  // Now render each option.
  int index = index_matching_prefix(emoji_name);
  if ( index == -1 ) {
    // Nothing to render, return;
    return;
  }
  int end = min(kMaxEmojiSize,index+max_emojis);
  for (int i = index; i != end; ++i) {
    // Now render this potential option!
    tft.println(emojis[i].name);
  }
  

}

