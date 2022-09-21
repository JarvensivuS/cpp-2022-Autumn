#include"kerros.h"

using namespace std;

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan 4 kpl kerroksen asuntoja\n";
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
    asuntoja += 4;
}

double Kerros::laskeKulutus(double d) {
    int kulutus = (Asunto::asukasMaara*Asunto::neliot) * asuntoja * d;
    cout << "Kerroksen kulutus, kun hinta = " << d << " on " << kulutus <<endl;
    return d;
}

