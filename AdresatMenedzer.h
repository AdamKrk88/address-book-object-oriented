#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <cstdlib>

#include "PlikZAdresatami.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;


class AdresatMenedzer {

    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = 0;
        idZalogowanegoUzytkownika = 0;
    };

    void dodajAdresata();
    void ustawiDZalogowanegoUzytkownika(int noweId);
    int pobierziDZalogowanegoUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyczyscWektorZAdresatami();
    void wyswietlWszystkichAdresatowZalogowanegoUzytkownika();

};


#endif
