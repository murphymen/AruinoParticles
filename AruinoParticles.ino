#include "ArduinoParticles.h"
b
v2d a(1.5, 1.5);
ArduinoParticles ap;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  a.print("a");
  ap.p.update();
}

void loop() {
  // put your main code here, to run repeatedly:


} 
