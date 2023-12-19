#pragma once
#include <string>

class Str
{
    char* str_;
    int lenth;
public:
    Str();
    Str(const char *str);
    ~Str();

    void concatenate(const char *str);
    void concatenate(const Str& str);
    void concatenate(char str);
    int len();
    void print();
    void println();
    char charAt(int index);
    bool isEmpty();
    void lowerCase();
    void upperCase();
};
