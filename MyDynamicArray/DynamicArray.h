#pragma once

class DynamicArray {
    int* data; // Указатель на динамический массив
    int capacity; // Вместимость массива
    int currentSize; // Текущий размер массива

    void resize(); // Увеличить размер массива
public:
    DynamicArray(); 
    ~DynamicArray(); 

    void add(int value); // Добавить элемент в массив
    int get(int index) const; // Получить элемент по индексу
    int size() const; // Получить текущий размер массива
};