#include <iostream>

#include "Functions.h"

using namespace std;

void printDynamicArray::print(DynamicArray& arr) {
    cout << "[";
    for (int i = 0; i < arr.size() - 1; ++i) {
        cout << arr.get(i) << ", ";
    }
    cout << arr.get(arr.size() - 1) << "]" << endl;
}