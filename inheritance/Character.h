﻿#pragma once
#include "GameObject.h"

class Character: public GameObject
{
protected:
    int healPoints;
    int strength;
public:
    Character();
    ~Character();

    void spawn() override;
    
    void move(int x, int y);
    void attack();
    void getDamage();
};
