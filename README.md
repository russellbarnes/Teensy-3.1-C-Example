## Using C With Teensy 3.1

This is a basic example for building software for the Teensy 3.1 on Mac using C.  This allows you to bypass the Arduino IDE, although it must still be installed on your Mac.

Thanks to forum contributor SteveS, whose directions on this matter can be found here: http://forum.pjrc.com/threads/24861-Teensy-3-1-without-arduino-IDE?p=40258&viewfull=1#post40258

### Summary:

1. Install [Arduino 1.0.5](http://arduino.cc/en/main/software) for Mac.
2. Install Teensyduino for Teensy 3.1 ([1.18+](http://www.pjrc.com/teensy/td_download.html)).
3. (Optional) To ensure that the toolchain is working, open Arduino, set Tools -> Board to Teensy 3.1, and set Tools -> CPU Speed to 48 MHz.  Then, build & flash the "Blink" example under Files -> Examples -> Teensy -> Tutorial1.
4. Download this example code, run **make** in the directory and flash the resultant .hex file with the Teensy program.

