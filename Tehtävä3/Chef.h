#ifndef CHEF_CPP
#define CHEF_CPP

#include<iostream>
#include<stdlib.h>

class Chef {
public: 
    Chef(){}
    std::string name;
    Chef(std::string);
    ~Chef();
    void makeSalad();
    void makeSoup();
};

#endif