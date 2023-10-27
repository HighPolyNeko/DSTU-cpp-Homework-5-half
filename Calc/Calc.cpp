#include <clocale>
#include <iostream>
#include <string>
#include <functional>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU-UA.UTF-8");

    unordered_map<string, function<double(double, double)>> operators{
        {"+", [](double x, double y) { return x + y; }},
        {"-", [](double x, double y) { return x - y; }},
        {"*", [](double x, double y) { return x * y; }},
        {
            "/", [](double x, double y)
            {
                if (y != 0)
                {
                    return x / y;
                }
                cerr << "Деление на 0" << endl;
                return 0.0;
            }
        }
    };

    double x, y;
    string op;
    while (true)
    {
        cout << "Введите выражение в польской (префиксной) нотации (оператор число число), или exit для выхода" << endl;
        cin >> op;
        if (op == "exit") break;
        cin >> x >> y;

        if (operators.find(op) != operators.end())
        {
            double result = operators[op](x, y);
            cout << "Ответ: " << result << endl;
        }
        else
        {
            cerr << "Неизвестный оператор" << endl;
        }
    }

    return 0;
}
