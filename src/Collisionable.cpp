
#include<iostream>
using namespace std;
#include "Collisionable.h"

bool Collisionable:: isCollision(Collisionable& obj) const{
    return getBounds().intersects(obj.getBounds());

}

Collisionable::Collisionable()
{
    //ctor
}

