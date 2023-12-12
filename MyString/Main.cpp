#include <iostream>

#include "Str/Str.h"

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU-UA.UTF-8");
    
    Str hello = Str("Hello");
    Str word = Str("word");
    
    hello.println();
    hello += " ";
    hello += word;
    hello += "! Блин реально привет мир";
    hello.print();

    std::cout << hello.charAt(10);
    std::cout << hello.charAt(-10);
    
    return 0;
}
