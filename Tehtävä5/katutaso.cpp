#include"katutaso.h"
#include<iostream>

using namespace std;


void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2 kpl katutason asuntoja\n";
    as1->maarita(2,100);
    as2->maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja\n";
    Kerros::maaritaAsunnot();
    asuntoja += 2;

}

double Katutaso::laskeKulutus(double d) {
    int kulutus = (Asunto::asukasMaara*Asunto::neliot) * asuntoja * d;
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << d 
    << " on " << kulutus;
    return d;
}
