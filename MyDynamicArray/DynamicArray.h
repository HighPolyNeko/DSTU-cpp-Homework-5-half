#pragma once

class DynamicArray {
    int* data; // Указатель на динамический массив
    int capacity; // Вместимость массива
    int currentSize; // Текущий размер массива

    void resize(); // Увеличить размер массива
    void copy(int arr[], int newArr[]);
public:
    DynamicArray(); 
    DynamicArray(int length); 
    ~DynamicArray(); 

    void add(int value); // Добавить элемент в массив
    int get(int index); // Получить элемент по индексу
    void set(int index, int value); // Задать элемент по индексу
    int size(); // Получить текущий размер массива
};