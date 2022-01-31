
// #include <core_pins.h> //because f_cpu_actual error
// #include <Audio.h>
// #include <Wire.h>
// #include <SPI.h>
// #include <SD.h>
// #include <SerialFlash.h>




// // GUItool: begin automatically generated code
// //AudioInputI2S            i2s1;     
// AudioSynthWaveformSine   sine1;      
// AudioOutputUSB           usb1;           
// //AudioConnection          patchCord1(i2s1, 0, usb1, 0);
// AudioConnection          patchCord1(sine1, 0, usb1, 0);
// AudioOutputI2S out1;
// //AudioControlSGTL5000     sgtl5000_1;     
// // GUItool: end automatically generated code

// //const int myInput = AUDIO_INPUT_LINEIN;
// //const int myInput = AUDIO_INPUT_MIC;

// void setup() {
//   // Audio connections require memory to work.  For more
//   // detailed information, see the MemoryAndCpuUsage example
//   AudioMemory(12);

//   // Enable the audio shield, select input, and enable output
//   //sgtl5000_1.enable();
//   //sgtl5000_1.inputSelect(myInput);

//   sine1.amplitude(1.0);
//   sine1.frequency(15000);
//   //sgtl5000_1.volume(1.0);
// }

// void loop() {
// }

#include <Audio.h>

// GUItool: begin automatically generated code
AudioOutputI2S out1;
AudioSynthWaveformSine   sine1;          //xy=265.0000305175781,430.0000629425049
AudioSynthNoiseWhite     noise1;         //xy=265.00000762939453,480.00001525878906
AudioOutputUSB           usb1;           //xy=454.0000114440918,462.00001430511475
AudioConnection          patchCord1(sine1, 0, usb1, 0);
AudioConnection          patchCord2(noise1, 0, usb1, 1);
// GUItool: end automatically generated code



void setup() {
  AudioMemory(12);
  sine1.frequency(400);
  sine1.amplitude(0.5);
  noise1.amplitude(0.5);

}

void loop() {

}
