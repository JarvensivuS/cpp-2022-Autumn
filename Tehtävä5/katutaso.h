#ifndef KATUTASO_h
#define KATUTASO_h
#include"kerros.h"

class Katutaso : public Kerros{
    public:
        Katutaso(){std::cout<<"katutaso luotu\n";}
        Asunto object;
        Asunto *as1 = &object;
        Asunto *as2 = &object;

        void maaritaAsunnot() override;
        double laskeKulutus(double d); 

};

#endif 