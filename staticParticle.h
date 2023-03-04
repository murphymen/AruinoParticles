#ifndef _staticParticle_h_
#define _staticParticle_h_

#include "BaseParticle.h"
#include <FastLED.h>

class staticParticle:public BaseParticle
{
public:
  CHSV  color;

  //staticParticle(v2d& pos, CHSV& col);
  void  set(v2d&, CHSV&);
  void  update() override;
};

/*
staticParticle::staticParticle(v2d& pos, CHSV& col)
{
  position = pos;
  color = col;
}
*/

void staticParticle::set(v2d &pos, CHSV &col)
{
  position = pos;
  color = col;
}

void staticParticle::update()
{
  //Serial.print("aaaaaaaa");
  Serial.println("staticPart");
}


#endif 