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
