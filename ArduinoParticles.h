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
  //staticParticle p;


  ArduinoParticles();
  void update();
};

ArduinoParticles::ArduinoParticles()
{
  //staticParticle sp;
  v2d p(1, 1);
  CHSV c(10,0,0);
  //sp.set(p, c);
  movingParticle mp;
  particles.push_back(sp);
  particles.push_back(mp);
}

void ArduinoParticles::update()
{
  /*
  PooledList<BaseParticle>::iterator i = particles.begin();
  while (i != particles.end()) 
  {
    BaseParticle tmp = *i;
    tmp.update();
    ++i;
  }
  */

  for(auto& p : particles)
  {
    p.update();
  }
}
#endif 