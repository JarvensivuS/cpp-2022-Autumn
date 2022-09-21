#ifndef KERROSTALO_H
#define KERROSTALO_H

#include"katutaso.h"
#include"kerros.h"

class kerrostalo
{
protected:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
public:
    kerrostalo();
    double laskeKulutus(double d);
};
#endif