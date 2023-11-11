#include <iostream>

#include "Functions.h"

void printArray::print(DynamicArray& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << i << ": " << arr.get(i) << std::endl;
    }
}