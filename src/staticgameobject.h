#ifndef STATICGAMEOBJECT_H
#define STATICGAMEOBJECT_H

#include "gameobject.h"

class StaticGameObject : public GameObject {
 protected:
  PhysicsComponent *physics;
  GraphicsComponent *graphics;

 public:
  StaticGameObject();
  StaticGameObject(QString, PhysicsComponent *, GraphicsComponent *);
  bool status = true;
  virtual void Update(Maze &);
  virtual void Delete();
};

#endif  // STATICGAMEOBJECT_H
