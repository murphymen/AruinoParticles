#ifndef _movingParticle_h_
#define _movingParticle_h_

#include "BaseParticle.h"

class movingParticle:public BaseParticle
{
public:

  void  update() override;
};

void movingParticle::update()
{
  position = position + 2.5f;
  position.print("position");
}

#endif 