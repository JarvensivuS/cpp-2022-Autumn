#include<iostream>
#include"asunto.h"

using namespace std;

void Asunto::maarita(int asukasMaara, int neliot){
    asukasMaara=asukasMaara;
    asuntoja=asuntoja;
    asuntoja++;
    cout << "Asunto maaritetty, asukkaita = " << asukasMaara << ", nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double d) {
    int kulutus = (asukasMaara*neliot) * asuntoja * d;
    cout << "Asunnon kulutus, kun hinta = " << d << " on " << kulutus <<endl;
    return d;
}
