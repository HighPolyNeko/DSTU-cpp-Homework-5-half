#include "DynamicArray.h"
#include <algorithm> // для std::copy
#include <stdexcept> // для std::out_of_range

DynamicArray::DynamicArray() : data(new int[1]), capacity(1), currentSize(0) {}

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
int DynamicArray::get(int index) const {
    if (index < 0 || index >= currentSize) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

// Получить текущий размер массива
int DynamicArray::size() const {
    return currentSize;
}

// Увеличить размер массива
void DynamicArray::resize() {
    capacity += 10;
    int* newData = new int[capacity];
    std::copy(data, data + currentSize, newData);
    delete[] data;
    data = newData;
}
