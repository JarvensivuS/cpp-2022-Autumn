#include <iostream>
using namespace std;
#include "calculator.h"
#include "scientific.h"

int main()
{
    // lasketaan perityllä Calculaattorilla
    Calculator peruslaskin;
    peruslaskin.inputOperands();
    peruslaskin.calculateResult();
    peruslaskin.showResults();
    cout<<"Ja vaihdetaan laskinta"<<endl;

    // Lasketaan parannetulla Scientific laskimella.
    Scientific laskin;
    laskin.inputOperands();
    laskin.calculateScientific();
    laskin.showResults();

    return 0;
}
