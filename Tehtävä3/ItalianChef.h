#ifndef ITALIANCHEF_CPP
#define ITALIANCHEF_CPP
 
#include "Chef.h"

class ItalianChef : public Chef 
{
public:
    ItalianChef(std::string);
    ~ItalianChef(){}
    std::string getName();
    void makePasta(int(),int());

private:
    int jauhot = 250;
    int vesi = 100;
};

#endif