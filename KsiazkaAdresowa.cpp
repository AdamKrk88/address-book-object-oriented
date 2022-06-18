#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa :: rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}


void KsiazkaAdresowa :: logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}


void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}


void KsiazkaAdresowa :: wylogowanieUzytkownika() {
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}


void KsiazkaAdresowa :: dodajAdresata() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer -> dodajAdresata();
    } else {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}


void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}


void KsiazkaAdresowa :: wyswietlWszystkichAdresatowZalogowanegoUzytkownika() {
    adresatMenedzer -> wyswietlWszystkichAdresatowZalogowanegoUzytkownika();
}


bool KsiazkaAdresowa :: czyUzytkownikJestZalogowany() {
    return uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}


char KsiazkaAdresowa :: wybierzOpcjeZMenuGlownego() {
    return menu.wybierzOpcjeZMenuGlownego();
}


char KsiazkaAdresowa :: wybierzOpcjeZMenuUzytkownika() {
    return menu.wybierzOpcjeZMenuUzytkownika();
}


void KsiazkaAdresowa :: wyszukajAdresatowPoImieniuDlaZalogowanegoUzytkownika() {
    adresatMenedzer -> wyszukajAdresatowPoImieniuDlaZalogowanegoUzytkownika();
}


void KsiazkaAdresowa :: wyszukajAdresatowPoNazwiskuDlaZalogowanegoUzytkownika() {
    adresatMenedzer -> wyszukajAdresatowPoNazwiskuDlaZalogowanegoUzytkownika();
}


void KsiazkaAdresowa :: usunWybranegoAdresata() {
    adresatMenedzer -> usunWybranegoAdresata();
}


void KsiazkaAdresowa :: edytujAdresata() {
    adresatMenedzer -> edytujAdresata();
}
