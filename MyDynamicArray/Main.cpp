#include <iostream>
#include "DynamicArray.h"

int main() {
    DynamicArray arr;

    arr.add(10);
    arr.add(20);
    arr.add(30);

    for (int i = 0; i < arr.size(); ++i) {
        std::cout << i << ": " << arr.get(i) << std::endl;
    }

    return 0;
}

