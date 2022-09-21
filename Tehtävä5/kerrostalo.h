#ifndef KERROSTALO_H
#define KERROSTALO_H

#include"katutaso.h"
#include"kerros.h"

class kerrostalo
{
protected:
    Katutaso object;
    Katutaso *eka = &object;
    Kerros kerrosObject;
    Kerros *toka = &kerrosObject;
    Kerros *kolmas = &kerrosObject;
public:
    kerrostalo();
    double laskeKulutus(double d);
};
#endif