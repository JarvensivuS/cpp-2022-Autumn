#ifndef KATUTASO_h
#define KATUTASO_h
#include"kerros.h"

class Katutaso : public Kerros{
    public:
        Katutaso(){std::cout<<"katutaso luotu\n";}
        Asunto as1;
        Asunto as2;

        void maaritaAsunnot() override;
        double laskeKulutus(double d); 

};

#endif 