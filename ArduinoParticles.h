#ifndef _ArduinoParticles_h_
#define _ArduinoParticles_h_

#include <PooledList.h>
#include "staticParticle.h"
#include "movingParticle.h"

class ArduinoParticles
{
private:
  PooledList<BaseParticle> particles;
public:
  staticParticle p;


  ArduinoParticles();
  void update();
};

ArduinoParticles::ArduinoParticles()
{
  staticParticle sp;
  movingParticle mp;
  particles.push_back(sp);
  particles.push_back(mp);
}

void ArduinoParticles::update()
{
  
}
#endif 