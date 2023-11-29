#pragma once
#include "Character.h"

class Hero: public Character
{
public:
    Hero();
    ~Hero();

    void spawn() override;
    
    void useAbility();
};
