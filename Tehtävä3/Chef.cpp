#include "Chef.h"

Chef::Chef(std::string nimi) {
            name = "\nChef " + nimi;
        }
Chef::~Chef() {
    std::cout << name + " destruktori";
}
void Chef::makeSalad() {
    std::cout << name + " makes salad";
}
void Chef::makeSoup() {
    std::cout << name + " makes soup";
}



