#include "scientific.h"
#include <math.h>

Scientific::Scientific()
{

}

void Scientific::inputOperands()
{
    Calculator::inputOperands();
    cout<<"Give scientific operation to be done for result"<<endl;
    cout<<"Give operation s=>sqrt, p=>power"<<endl;
    cin>>scientificOperation;

}

void Scientific::showResults()
{
    Calculator::showResults();
    cout<<"Scientific operation for that result gives = " << scientificResult <<endl;
}

void Scientific::calculateScientific()
{
    Calculator::calculateResult();
    switch (scientificOperation) {
    case 's':
        scientificResult = sqrt(result);
        break;
    case 'p':
        scientificResult = result*result;
        break;
    default:
        cout<<"Not such scientific result"<<endl;

    }
}
