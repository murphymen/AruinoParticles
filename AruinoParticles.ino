#include "memoryDebug.h"
#include "ArduinoParticles.h"

//v2d a(1.5, 1.5);
ArduinoParticles ap;

void setup() {
  Serial.begin(9600);
  //a.print("a");
  //ap.p.update();
  //ap.update();
}

void loop() {
  // put your main code here, to run repeatedly:
  ap.update();
  delay(500);
} 
