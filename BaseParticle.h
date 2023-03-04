#ifndef _BaseParticle_h_
#define _BaseParticle_h_

#include "v2d.h"

class BaseParticle
{
public:
  v2d       position;
  uint16_t  life_time;


  virtual void  update();
};


#endif 