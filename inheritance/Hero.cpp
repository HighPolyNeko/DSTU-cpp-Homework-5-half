#include "Hero.h"

#include <iostream>

Hero::Hero()
{
}

Hero::~Hero()
{
}

void Hero::spawn() {
    Character::spawn();
    std::cout << "Но это же объект не для спавна" << std::endl;
}

void Hero::useAbility()
{
    std::cout << "Способность успешно скастованна." << std::endl;
}
