#include <iostream>

#include "Str/Str.h"

int main(int argc, char* argv[])
{
    Str hello = Str("Hello");
    Str word = Str("word");
    
    hello.concatenate(" ");
    hello.concatenate(word);
    hello.concatenate("! Man I Love Frogs!");
    hello.upperCase();
    hello.println();

    std::cout << hello.charAt(12);
    std::cout << hello.charAt(16);
    std::cout << hello.charAt(18);
    std::cout << hello.charAt(23);
    std::cout << hello.charAt(-10);

    hello.lowerCase();
    hello.print();
    
    return 0;
}
