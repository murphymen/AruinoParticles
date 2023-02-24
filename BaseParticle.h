#ifndef _BaseParticle_h_
#define _BaseParticle_h_
b
#include "v2d.h"

class BaseParticle
{
public:
  v2d       position;
  uint16_t  live_time;


  virtual void  update() = 0;
};


#endif 