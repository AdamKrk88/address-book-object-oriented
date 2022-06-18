#include "PlikTekstowy.h"


bool PlikTekstowy :: czyPlikJestPusty() {
    bool czyJestPusty = true;
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU.c_str(),ios :: app);

    if (plikTekstowy.good()) {
        plikTekstowy.seekg(0, ios::end);
        if (plikTekstowy.tellg() != 0)
            czyJestPusty = false;
    }

    plikTekstowy.close();
    return czyJestPusty;
}


string PlikTekstowy :: pobierzNazwaPliku() {
    return NAZWA_PLIKU;
}
