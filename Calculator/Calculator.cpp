#include "Calculator.h"


Calculator::Calculator()
{
    x = 0;
}

Calculator::Calculator(double x)
{
    this->x = x;
}

Calculator::~Calculator()
{ }

void Calculator::set_x(double x)
{
    this->x = x;
}


double Calculator::get_x()
{
    return x;
}


double Calculator::sum(double y)
{
    x += y;
    return x;
}

double Calculator::difference(double y)
{
    x -= y;
    return x;
}

double Calculator::product(double y)
{
    x *= y;
    return x;
}

double Calculator::quotient(double y)
{
    x /= y;
    return x;
}

double Calculator::nod(int y)
{
    int a = int(x);
    double remainder = a > y ? a % y : y % a;
    while (remainder != 0)
    {
        if (a > y)
        {
            a = remainder;
        }
        else
        {
            y = remainder;
        }
        remainder = a > y ? a % y : y % a;
    }
    return a < y ? a : y;
}

double Calculator::factorial()
{
    double y = int(x), result = 1;
    while (y > 1)
    {
        result *= y--;
    }
    return result;
}

double Calculator::fibonacci()
{
    if (x < 2) return 0;
    if (x < 4) return 1;

    int a = 1, b = 1;    
    
    for (double i = 4; i <= int(x); ++i)
    {
        double c = a;
        a += b;
        b = c;
    }
    
    return a;
}
