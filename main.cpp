#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;


int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wylogowanieUzytkownika();
    /*   ksiazkaAdresowa.logowanieUzytkownika();
       ksiazkaAdresowa.dodajAdresata();
       ksiazkaAdresowa.dodajAdresata();
      ksiazkaAdresowa.wylogowanieUzytkownika();

      */
//    ksiazkaAdresowa.logowanieUzytkownika();
//   ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//   ksiazkaAdresowa.rejestracjaUzytkownika();
//   ksiazkaAdresowa.rejestracjaUzytkownika();
//   ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
