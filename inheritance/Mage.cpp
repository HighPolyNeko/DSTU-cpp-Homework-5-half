#include <iostream>
#include "Mage.h"

Mage::Mage()
{
    mana = 100;
}

Mage::~Mage()
{
}

void Mage::cast()
{
    if (mana < 10)
    {
        std::cout << "Недостаточно маны" << std::endl;
        return;
    }
    mana -= 10;
    useAbility();
    std::cout << "Нанес урона " << strength * 2 << " маны осталось " << mana << "%" << std::endl;
}
