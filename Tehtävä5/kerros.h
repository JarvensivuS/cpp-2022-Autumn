#ifndef KERROS_h
#define KERROS_h

#include"asunto.h"

class Kerros{
    public:
        Kerros(){std::cout<<"kerros luotu\n";}
        Asunto object;
        Asunto *as1 = &object;
        Asunto *as2= &object;
        Asunto *as3= &object;
        Asunto *as4= &object;
         
        int asuntoja = 0;

        virtual void maaritaAsunnot();
        double laskeKulutus(double d);
        
        
};

#endif
