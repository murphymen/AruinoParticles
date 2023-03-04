#ifndef _movingParticle_h_
#define _movingParticle_h_

#include "BaseParticle.h"

class movingParticle:public BaseParticle
{
public:
  v2d velocity;

  void  update();
};

void movingParticle::update()
{
  //position = position + velocity;
  //position.print("position");
  Serial.println("movingPart");
}

#endif 