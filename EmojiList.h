
struct Emoji {
  String name;
  String unicode;
  String filepath;
};

// Keep list sorted.
Emoji emojis[] {
  { "climbing", "9d7", "flob" } /* https://www.compart.com/en/unicode/U+1F9D7 */,
  { "duck", "986", "flob" } /* https://www.compart.com/en/unicode/U+1F986 */,
  { "guitar", "3b8", "flob" } /* https://www.compart.com/en/unicode/U+1F3B8 */,
  { "poop", "4a9", "flob" } /* https://www.compart.com/en/unicode/U+1F4A9 */,
  { "shrug", "937", "flob" } /* https://www.compart.com/en/unicode/U+1F937 */,
  { "tearslaughing", "923", "flob" } /* https://www.compart.com/en/unicode/U+1F923 */,
  { "thumbsup", "44d", "flob" } /* https://www.compart.com/en/unicode/U+1F44D */, 
  { "trainfront", "686", "flob" } /* https://www.compart.com/en/unicode/U+1F686 */,
  { "trainside", "684", "flob" } /* https://www.compart.com/en/unicode/U+1F684 */,
};

int kMaxEmojiSize = sizeof(emojis)/sizeof(Emoji);
    

// Returns a matching prefix, or -1 if no prefix matches.
// Remember an empty string will always return i = 0.
int index_matching_prefix(String prefix) {
  for (int i = 0; i != kMaxEmojiSize; ++i) {
    if (emojis[i].name.startsWith(prefix)) {
      return i;
    }
  }
  return -1;
}
  
