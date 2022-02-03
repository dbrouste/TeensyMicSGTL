# TeensyMicSGTL
Teensy USB Mic (Work in Progress)
How to use it :

Copy the files in Framework folder to your Framework

Copy the PlatformIO files to your project

# Description
The goal is to develop a small ultrasound microphone connected to the usb port of a phone

# Status of the project
- PCB : Done. https://oshwlab.com/damien.brouste/teensymic-sgtl5000
- High Samplerate : Done. Based on the work of Frank B : https://forum.pjrc.com/threads/67749-USB-Audio-samplerates-added
- Create the microphone USB descriptor : In progress. Windows can't recognize it yet

# Project log

03/02/2022 :
- Hardware had an error on the i2s signal port. Corrected on EasyEDA. Schematics and PCB are now in version 1.1
- I still can't enumerate the teensy 4.0 as a microphone. Downloaded Wireshark and USB Command Verifier (https://www.usb.org/document-library/usb20cv-x64-bit) (a usb3 version exist depending on your computer). Those tool will hopefully help to identify the enumerations problem. Trace have been uploaded in debug directory.
