#ifndef KERROS_h
#define KERROS_h

#include"asunto.h"

class Kerros{
    public:
        Kerros(){std::cout<<"kerros luotu\n";}
        Asunto as1,as2,as3,as4; 
        int asuntoja = 0;

        virtual void maaritaAsunnot();
        double laskeKulutus(double d);
        
        
};

#endif
