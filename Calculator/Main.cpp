#include <clocale>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>

#include "Calculator.h"

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU-UA.UTF-8");

    Calculator calculator = Calculator();
    string all_operators[] = {"+", "-", "*", "/", "!", "fib", "nod"};
    unordered_map<string, function<double(double)>> operators{
            {"+", [&calculator](double y) { return calculator.sum(y); }},
            {"-", [&calculator](double y) { return calculator.difference(y); }},
            {"*", [&calculator](double y) { return calculator.product(y); }},
            {"/", [&calculator](double y) { return calculator.quotient(y); }},
            {"nod", [&calculator](double y) { return calculator.nod(int(y)); }},
    };
    

    double numb = 0;
    cout << "Введите число: ";
    cin >> numb;

    calculator.set_x(numb);
    
    while (true)
    {
        string op;
        cout << "Введите оператор (+, -, *, /, !, fib, nod) или exit для выхода: ";
        cin >> op;
        
        if (op == "exit") break;

        if (!find(begin(all_operators), end(all_operators), op))
            throw new exception("Нет такого оператора!");
        
        if (op == "fib")
        {
            cout << "Число Фибоначи под номером " << int(calculator.get_x()) << ": " << calculator.fibonacci() << endl;
            continue;
        }

        if (op == "!")
        {
            cout << "Факториал числа " << int(calculator.get_x()) << ": " << calculator.factorial() << endl;
            continue;
        }

        cout << "Введите второе число: ";
        cin >> numb;

        cout << "Результат: " << operators[op](numb) << endl;
    }
    
    return 0;
}
