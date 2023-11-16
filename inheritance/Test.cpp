#include "Test.h"

#include <iostream>

#include "Character.h"
#include "GameObject.h"
#include "Hero.h"
#include "Mage.h"

void test::gameObject()
{
    GameObject gm = GameObject();
    gm.show();
}

void test::character()
{
    Character character1 = Character();
    character1.show();
    character1.move(10, 20);
}

void test::hero()
{
    Hero h = Hero();
    h.show();
    h.move(5, 10);
    h.useAbility();
}

void test::mage()
{
    Mage maga = Mage();
    maga.show();
    maga.move(15, 3);
    maga.cast();
}

void test::delimiter()
{
    std::cout << "----------------------------" << std::endl;
}

void test::execute()
{
    setlocale(LC_ALL, "RU");
    
    std::cout << "### GameObject ###" << std::endl;
    gameObject();
    delimiter();
    
    std::cout << "### Character ###" << std::endl;
    character();
    delimiter();

    std::cout << "### Hero ###" << std::endl;
    hero();
    delimiter();

    std::cout << "### Mage ###" << std::endl;
    mage();
    delimiter();
}
