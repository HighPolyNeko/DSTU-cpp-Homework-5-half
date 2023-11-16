#pragma once
#include "Hero.h"

class Mage: public Hero
{
    int mana;
public:
    Mage();
    ~Mage();
    
    void cast();
};
