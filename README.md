* Parts/Wiring
- Model M Connector pinout (At least for my particular cable). 
  - Red 5V -> to 5V boost.
  - White: data -> through level shifter -> A0
  - Brown: clock -> through level shifter -> A1
  - Black: Gnd
  - Silver: Sheathe


- 5V line to keyboard:
  - U1V10F5: https://www.pololu.com/product/2564 
    - Connected to both battery out, and the usb 5V line, with a diode on each end and a small capacitor to supress any spikes.

- Level shifter used: https://www.adafruit.com/product/757

- Controller used: https://www.adafruit.com/product/2995

- Display used: https://www.adafruit.com/product/3315




* PS2 Code
  Pulled and modified from github snippet here.
  https://gist.github.com/DorianRudolph/ca283dfdfd185bc812b7

* Roadmap
  * Improve the UI: Better incremental update (treat as a grid maybe), handle names longer than 12 chars (scrolling text), tab to rotate through which row is selected/tab complete, bitmap previews?
  * Clean up code, ideally the PS2 code should be a state machine with objects instead of a jumble of if statements and booleans
  * Design a 3d printable case for it beyond what I hacked up in one night. Ideally enclose the whole thing nicely!
  * Blutooth support of course!!!

* Adrduino IDE Setup:
  * Adafruit Feather M0: https://learn.adafruit.com/adafruit-feather-m0-wifi-atwinc1500/setup
  * Adafruit GFX (In the library manager!): https://github.com/adafruit/Adafruit-GFX-Library
  * Adafruit_ILI9341 (In the library manager!): https://github.com/adafruit/Adafruit_ILI9341
  * Keyboard (In the library manager!): https://www.arduino.cc/reference/en/language/functions/usb/keyboard/
 
