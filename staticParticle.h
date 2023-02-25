#ifndef _staticParticle_h_
#define _staticParticle_h_

#include "BaseParticle.h"

class staticParticle:public BaseParticle
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