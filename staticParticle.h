#ifndef _staticParticle_h_
#define _staticParticle_h_
b
#include "BaseParticle.h"

class staticParticle:BaseParticle
{
public:

  void  update() override;
};

void staticParticle::update()
{
  position = position + 1.5f;
  position.print("position");
}

#endif 