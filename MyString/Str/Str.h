#pragma once
#include <string>

class Str
{
protected:
    char* str_;
    int lenth;
public:
    Str();
    Str(const char *str);
    ~Str();

    Str& operator=(const char *str);
    Str& operator=(const Str &str);
    Str& operator+=(const char *str);
    Str& operator+=(const Str &str);

    int len();
    void print();
    void println();
    char charAt(int index);
    bool isEmpty();
};
