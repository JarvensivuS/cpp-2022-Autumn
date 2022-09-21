#include "ItalianChef.h"


ItalianChef::ItalianChef(std::string nimi) {
    name = "\nChef " + nimi;
}

void ItalianChef::makePasta(int(),int()) {
    std::cout << name + " makes pasta with special recipe";
    std::cout << name + " users jauhot = " << jauhot;
    std::cout << name + " users vesi = " << vesi;
}

std::string ItalianChef::getName() {
    return name;
}