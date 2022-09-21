#include "calculator.h"

Calculator::Calculator()
{

}

void Calculator::inputOperands()
{

    cout<<"Give first operand"<<endl;
    cin>>op1;

    cout<<"Give operation +, -, * or / "<<endl;
    cin>>operation;

    cout<<"Give second operand"<<endl;
    cin>>op2;


}

void Calculator::calculateResult()
{
    switch (operation) {
    case '+':
        result = calculatorEngine.sum(op1,op2);
        break;
    case '-':
        result = calculatorEngine.sub(op1,op2);
        break;
    case '*':
        result = calculatorEngine.mul(op1,op2);
        break;
    case '/':
        result = calculatorEngine.div(op1,op2);
        break;
    default:
        cout<<"No such operation!"<<endl;

    }
}

void Calculator::showResults()
{
    cout<<op1 << operation << op2 << " = " << result << endl;
}
