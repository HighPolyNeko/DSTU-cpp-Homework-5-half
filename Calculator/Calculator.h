#pragma once

class Calculator
{
    double x;
    
public:
    Calculator();
    Calculator(double x);
    ~Calculator();
    
    void set_x(double x);
    void set_op(char op);

    double get_x();

    double sum(double y);
    double difference(double y);
    double product(double y);
    double quotient(double y);

    double nod(int y);
    
    double factorial();
    double fibonacci();
};
