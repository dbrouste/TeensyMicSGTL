# TeensyMicSGTL
Teensy USB Mic 

File boards.txt lines 485
Add lines :
teensy40.menu.usb.mic=USB microphone
teensy40.menu.usb.mic.build.usbtype=USB_MIC
teensy40.menu.usb.mic.fake_serial=teensy_gateway

Add files 
usb_mic.cpp
usb_mic.h

usb.c
add #include "usb_mic.h"

WProgram.h
add #include "usb_mic.h"
