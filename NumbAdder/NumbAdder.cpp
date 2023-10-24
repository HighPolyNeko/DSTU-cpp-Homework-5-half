#include <clocale>
#include <iostream>

using namespace std;

int numb_adder(unsigned long numb)
{
    int result = 0;
    while (numb > 0)
    {
        result += numb % 10;
        numb /= 10;
    }

    return result;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU-UA.UTF-8");

    unsigned long numb = 0;
    cout << "Введите число от 0 до 4 294 967 295" << endl;
    cin >> numb;

    cout << "Сумма цифр числа " << numb << " равна " << numb_adder(numb) << endl;
    
    return 0;
}
