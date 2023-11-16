#pragma once
#include "GameObject.h"

class Character: GameObject
{
    int healPoints;
    int strength;
public:
    void move();
    void attack();
    void getDamage();
};
