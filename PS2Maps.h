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


const uint8_t kCapsLock = 57;
const uint8_t kSemiColon = 51;
const uint8_t kESC = 41;
const uint8_t kEnter = 40;
const uint8_t kBackSpace = 42;
uint8_t K[255], KE[255];
// Codes from https://github.com/arduino-libraries/USBHost/blob/master/src/hidboot.h#L112
void setupKeymaps() {
  K[0x1C] = 4;
  K[0x32] = 5;
  K[0x21] = 6;
  K[0x23] = 7;
  K[0x24] = 8;
  K[0x2B] = 9;
  K[0x34] = 10;
  K[0x33] = 11;
  K[0x43] = 12;
  K[0x3B] = 13;
  K[0x42] = 14;
  K[0x4B] = 15;
  K[0x3A] = 16;
  K[0x31] = 17;
  K[0x44] = 18;
  K[0x4D] = 19;
  K[0x15] = 20;
  K[0x2D] = 21;
  K[0x1B] = 22;
  K[0x2C] = 23;
  K[0x3C] = 24;
  K[0x2A] = 25;
  K[0x1D] = 26;
  K[0x22] = 27;
  K[0x35] = 28;
  K[0x1A] = 29;
  K[0x45] = 39;
  K[0x16] = 30;
  K[0x1E] = 31;
  K[0x26] = 32;
  K[0x25] = 33;
  K[0x2E] = 34;
  K[0x36] = 35;
  K[0x3D] = 36;
  K[0x3E] = 37;
  K[0x46] = 38;
  K[0x0E] = 53;
  K[0x4E] = 45;
  K[0x55] = 46;
  K[0x5D] = 49;
  K[0x66] = 42;
  K[0x29] = 44;
  K[0x0D] = 43;
  K[0x58] = kCapsLock; // CAPS Lock -> Caps lock
  // K[0x58] = 41; // CAPS Lock -> ESC
  K[0x12] = 225;
  K[0x14] = 224;
  K[0x11] = 226;
  K[0x59] = 229;
  K[0x5A] = 40;
  K[0x76] = 41;
  K[0x05] = 58;
  K[0x06] = 59;
  K[0x04] = 60;
  K[0x0C] = 61;
  K[0x03] = 62;
  K[0x0B] = 63;
  K[0x83] = 64;
  K[0x0A] = 65;
  K[0x01] = 66;
  K[0x09] = 67;
  K[0x78] = 68;
  K[0x07] = 69;
  K[0x7E] = 57;//Scroll 71
  K[0x54] = 47;
  K[0x77] = 83;
  K[0x7C] = 85;
  K[0x7B] = 86;
  K[0x79] = 87;
  K[0x71] = 99;
  K[0x70] = 98;
  K[0x69] = 89;
  K[0x72] = 90;
  K[0x7A] = 91;
  K[0x6B] = 92;
  K[0x73] = 93;
  K[0x74] = 94;
  K[0x6C] = 95;
  K[0x75] = 96;
  K[0x7D] = 97;
  K[0x5B] = 48;
  K[0x4C] = 51;
  K[0x52] = 52;
  K[0x41] = 54;
  K[0x49] = 55;
  K[0x4A] = 56;
  K[0x61] = 100;

  KE[0x1F] = 227;
  KE[0x14] = 228;
  KE[0x27] = 231;
  KE[0x11] = 230;
  KE[0x2F] = 101;
  KE[0x7c] = 70;
  KE[0x70] = 73;
  KE[0x6C] = 74;
  KE[0x7D] = 75;
  KE[0x71] = 76;
  KE[0x69] = 77;
  KE[0x7A] = 78;
  KE[0x75] = 82;
  KE[0x6B] = 80;
  KE[0x72] = 81;
  KE[0x74] = 79;
  KE[0x4A] = 84;
  KE[0x5A] = 88;
}
