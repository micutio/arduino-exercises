//www.elegoo.com
//2016.12.08

#include <pitches.h>
 
// notes in the melody:
int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {
  // pin8 output the voice, every scale is 0.5 sencond
  tone(8, melody[random(0, 9)], duration);
     
  // Output the voice after several minutes
  delay(250);
}
