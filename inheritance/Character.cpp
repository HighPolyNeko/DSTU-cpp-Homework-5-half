#include "Character.h"

#include <iostream>

Character::Character()
{
    healPoints = 100;
    strength = 10;
}

Character::~Character()
{
}

void Character::move(int x, int y)
{
    this->x += x;
    this->y += y;
    std::cout << "Сместился на " << x <<" " << y << std::endl;
}

void Character::attack()
{
}

void Character::getDamage()
{
}
