#include "Str.h"

#include <iostream>

Str::Str() {
    str_ = new char[1]{'\0'};
    lenth = 0;
}

Str::Str(const char* str) {
    lenth = 0;
    while (*(str + lenth) != '\0') {
        lenth++;
    }

    str_ = new char[lenth + 1];

    for (int i = 0; i < lenth; ++i) {
        *(str_ + i) = *(str + i);
    }

    *(str_ + lenth) = '\0';
}

Str::~Str() {
    delete[] str_;
}

void Str::concatenate(const char* str) {
    int temp_lenth = 0;
    while (*(str + temp_lenth) != '\0') {
        temp_lenth++;
    }

    lenth += temp_lenth;
    char* temp_str = new char[lenth + 1];

    for (int i = 0; i < lenth; ++i) {
        if (i < lenth - temp_lenth) {
            *(temp_str + i) = *(str_ + i);
        }
        else {
            *(temp_str + i) = *(str + i - (lenth - temp_lenth));
        }
    }

    delete[] str_;

    str_ = temp_str;
    *(str_ + lenth) = '\0';
}

void Str::concatenate(const Str& str) {
    lenth += str.lenth;
    char* temp_str = new char[lenth + 1];

    for (int i = 0; i < lenth; ++i) {
        if (i < lenth - str.lenth) {
            *(temp_str + i) = *(str_ + i);
        }
        else {
            *(temp_str + i) = *(str.str_ + i - (lenth - str.lenth));
        }
    }

    delete[] str_;

    str_ = temp_str;
    *(str_ + lenth) = '\0';
}

void Str::concatenate(char str) {
    int temp_lenth = 1;

    lenth += temp_lenth;
    char* temp_str = new char[lenth + 1];

    for (int i = 0; i < lenth; ++i) {
        if (i < lenth - temp_lenth) {
            *(temp_str + i) = *(str_ + i);
        }
        else {
            *(temp_str + i) = str;
        }
    }

    delete[] str_;

    str_ = temp_str;
    *(str_ + lenth) = '\0';
}

int Str::len() {
    return lenth;
}

void Str::print() {
    std::cout << str_;
}

void Str::println() {
    std::cout << str_ << '\n';
}

char Str::charAt(int index) {
    if (index > lenth - 1 || index < 0) {
        std::cerr << '\n' << "index out of range.\n";
    }
    return *(str_ + index);
}

bool Str::isEmpty() {
    return *str_ == '\0';
}

void Str::lowerCase() {
    for (int i = 0; i < lenth; ++i) {
        if (*(str_ + i) >= 'A' && *(str_ + i) <= 'Z') {
            *(str_ + i) = *(str_ + i) - ('A' - 'a');
        }
    }
}

void Str::upperCase() {
    for (int i = 0; i < lenth; ++i) {
        if (*(str_ + i) >= 'a' && *(str_ + i) <= 'z') {
            *(str_ + i) = *(str_ + i) + ('A' - 'a');
        }
    }
}
