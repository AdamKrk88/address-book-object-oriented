#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa :: rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}


void KsiazkaAdresowa :: logowanieUzytkownika() {
    adresatMenedzer.ustawiDZalogowanegoUzytkownika(uzytkownikMenedzer.logowanieUzytkownika());
    if (adresatMenedzer.pobierziDZalogowanegoUzytkownika() > 0) {
        adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    }
}


void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}


void KsiazkaAdresowa :: wylogowanieUzytkownika() {
    adresatMenedzer.ustawiDZalogowanegoUzytkownika(uzytkownikMenedzer.wylogowanieUzytkownika());
    adresatMenedzer.wyczyscWektorZAdresatami();
}


void KsiazkaAdresowa :: dodajAdresata() {
    adresatMenedzer.dodajAdresata();
}


void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
