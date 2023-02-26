#include "memoryDebug.h"
#include "ArduinoParticles.h"

memoryDebug mem;
v2d a(1.5, 1.5);
ArduinoParticles ap;

void setup() {
  // put your setup code here, to run once:
  mem.debug();
  Serial.begin(9600);
  a.print("a");
  ap.p.update();
  mem.debug();
}

void loop() {
  // put your main code here, to run repeatedly:


} 
