#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "basicalu.h"
#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator();
    virtual void inputOperands(void);
    void calculateResult(void);
    virtual void showResults(void);


protected:
    double op1,op2,result;
    char operation;
private:
    BasicALU calculatorEngine;
};

#endif // CALCULATOR_H
