#include "memoryDebug.h"
#include "ArduinoParticles.h"

//v2d a(1.5, 1.5);
ArduinoParticles ap;
Particle p;


void setup() {
  Serial.begin(9600);
  p.set_update_fn(&Particle::update);
  //a.print("a");
  //ap.p.update();
  //ap.update();
}

void loop() {
  // put your main code here, to run repeatedly:
  ap.update();
  delay(500);
} 
