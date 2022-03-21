# TeensyMicSGTL

![Board](https://image.easyeda.com/pullimage/XBNE2StlGrQPaFqrcQ4p9PTP7wEA845GwjZYXout.jpeg)

# Description
The goal is to develop a small (size of a Teensy4.0) ultrasound microphone connected to the usb port of a phone.
It is composed of a custom PCB board and a Teensy 4.0

# Status of the project
- PCB : Done. https://oshwlab.com/damien.brouste/teensymic-sgtl5000
- High Samplerate : Done. Based on the work of Frank B : https://forum.pjrc.com/threads/67749-USB-Audio-samplerates-added
- Making it work on Windows : Done.
- Making it work on Android : Done.
- Create the microphone USB descriptor : Done.

# Project log

21/03/2022
Sinusoidal received on the phone at 384kHz samplerate

04/02/2022 :
- Edwin managed to get it to work on Windows at 384kHz. 
He edited #define AUDIO_BLOCK_SAMPLES  384 in Audiostream.h

03/02/2022 :
- Hardware had an error on the i2s signal port. Corrected on EasyEDA. Schematics and PCB are now in version 1.1
- I still can't enumerate the teensy 4.0 as a microphone. Downloaded Wireshark and USB Command Verifier (https://www.usb.org/document-library/usb20cv-x64-bit) (a usb3 version exist depending on your computer). Those tool will hopefully help to identify the enumerations problem. Trace have been uploaded in debug directory.
- Edwin manage to get a signal on windows using the existing USB_AUDIO up to 176kHz
