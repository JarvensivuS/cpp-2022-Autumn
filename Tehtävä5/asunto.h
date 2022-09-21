#ifndef ASUNTO_H
#define ASUNTO_H

#include<iostream>

class Asunto{
    public:
        Asunto(){std::cout<<"asunto luotu\n";}
        const static int asukasMaara = 2;
        const static int neliot = 100;
        int asuntoja;
        void maarita(int asukasMaara, int neliot);
        double laskeKulutus(double d);

};

#endif // ASUNTO_H
