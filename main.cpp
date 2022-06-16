#include <iostream>
#include "KsiazkaAdresowa.h"
#include "Menu.h"

using namespace std;


int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true) {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {

            switch (ksiazkaAdresowa.wybierzOpcjeZMenuGlownego()) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }

        else {
            switch (ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika()) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniuDlaZalogowanegoUzytkownika();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwiskuDlaZalogowanegoUzytkownika();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatowZalogowanegoUzytkownika();
                break;
            case '5':
                ksiazkaAdresowa.usunWybranegoAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu" << endl << endl;
                system("pause");
                break;
            }
        }
    }
    return 0;
}
