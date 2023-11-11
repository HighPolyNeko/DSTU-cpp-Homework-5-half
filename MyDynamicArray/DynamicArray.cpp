#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray() : data(new int[1]), capacity(1), currentSize(0) {}

DynamicArray::DynamicArray(const int lenth) : data(new int[lenth]), capacity(lenth), currentSize(lenth) {}

DynamicArray::~DynamicArray() {
    delete[] data;
}

// Добавить элемент в массив
void DynamicArray::add(int value) {
    if (currentSize == capacity) {
        resize();
    }
    data[currentSize++] = value;
}

// Получить элемент по индексу
int DynamicArray::get(int index) {
    if (index < 0 || index >= currentSize) {
        std::cerr << "Index out of range" << std::endl;
    }
    return data[index];
}

void DynamicArray::set(int index, int value) {
    if (index < 0 || index >= currentSize) {
        std::cerr << "Index out of range" << std::endl;
    }
    data[index] = value;
}

// Получить текущий размер массива
int DynamicArray::size() const {
    return currentSize;
}

// Увеличить размер массива
void DynamicArray::resize() {
    capacity *= 2;
    int* newData = new int[capacity];
    copy(data, newData);
    delete[] data;
    data = newData;
}

void DynamicArray::copy(int arr[], int newArr[]) {
    for (int i = 0; i < currentSize; ++i) {
        *(newArr + i) = *(arr + i);
    }
}
