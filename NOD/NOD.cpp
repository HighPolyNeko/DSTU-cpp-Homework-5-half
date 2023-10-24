#include <clocale>
#include <iostream>

using namespace std;

unsigned long NOD(unsigned long a, unsigned long b)
{
    int remainder = a > b ? a % b : b % a;
    while (remainder != 0)
    {
        if (a > b)
        {
            a = remainder;
        }
        else
        {
            b = remainder;
        }
        remainder = a > b ? a % b : b % a;
    }
    return a < b ? a : b;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU-UA.UTF-8");

    unsigned long a = 0;
    unsigned long b = 0;
    cout << "Введите два числа от 0 до 4 294 967 295 каждое" << endl;
    cin >> a >> b;
    cout << "НОД равен: " << NOD(a, b) << endl;


    return 0;
}