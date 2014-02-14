## Using C With Teensy 3.1

This is a basic example for building software for the Teensy 3.1 on Mac using C.  Use of the Arduino IDE is not necessary, although it must be installed on your Mac.

Thanks to forum contributor SteveS, whose directions on this matter can be found here: http://forum.pjrc.com/threads/24861-Teensy-3-1-without-arduino-IDE?p=40258&viewfull=1#post40258

### Summary:

1. Install [Arduino 1.0.5](http://arduino.cc/en/main/software) for Mac.
2. Install Teensyduino for Teensy 3.1 (1.18+; this example is based on [1.18rc4](http://www.pjrc.com/teensy/td_118-rc4/teensyduino.dmg)).
3. Open Arduino and build & flash the "Blink" example under Files -> Examples -> Teensy -> Tutorial1 to ensure that the core toolchain is working.
4. Download this example code, run *make* and flash the .hex file with the Teensy program.

