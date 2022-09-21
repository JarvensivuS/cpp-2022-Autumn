#include"kerrostalo.h"

kerrostalo::kerrostalo(){
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double kerrostalo::laskeKulutus(double d) {
    int kulutus = (Asunto::asukasMaara * Asunto::neliot) * 14 * d;
    std::cout << "Kerrostalon kulutus, = " 
    << kulutus;

    return d;
}