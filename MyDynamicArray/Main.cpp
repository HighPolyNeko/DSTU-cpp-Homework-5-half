#include <iostream>

#include "DynamicArray.h"
#include "Functions.h"

int main() {
    DynamicArray arr(2);

    arr.add(10);
    arr.add(20);
    arr.add(30);

    printDynamicArray::print(arr);
    
    return 0;
}

