#include "UzytkownikMenedzer.h"


void UzytkownikMenedzer :: rejestracjaUzytkownika() {

    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}


Uzytkownik UzytkownikMenedzer :: podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login;
    do {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}


int UzytkownikMenedzer :: pobierzIdNowegoUzytkownika() {
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}


bool UzytkownikMenedzer :: czyIstniejeLogin(string login) {
    for (int i = 0; i < uzytkownicy.size(); i++) {
        if (uzytkownicy[i].pobierzLogin() == login)
            return true;
    }
    return false;

}


void UzytkownikMenedzer :: wypiszWszystkichUzytkownikow() {
    for (int i = 0; i < uzytkownicy.size(); i++) {
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
}


void UzytkownikMenedzer :: wczytajUzytkownikowZPliku() {
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}


void UzytkownikMenedzer :: logowanieUzytkownika() {
    string login = "", haslo = "";
    int iloscProb = 3;

    cout << "Podaj login: ";
    login = MetodyPomocnicze :: wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();

    while (itr != uzytkownicy.end()) {
        if (itr -> pobierzLogin() == login) {
            for (iloscProb; iloscProb > 0; iloscProb--) {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze :: wczytajLinie();

                if (itr -> pobierzHaslo() == haslo) {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika = itr -> pobierzId();
                    break;
                }
            }

            if (iloscProb == 0) {
                cout << "Wprowadzono 3 razy bledne haslo." << endl;
                system("pause");
                idZalogowanegoUzytkownika = 0;
                break;
            } else {
                break;
            }
        }
        itr++;
    }

    if (itr == uzytkownicy.end()) {
        cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
        system("pause");
        idZalogowanegoUzytkownika = 0;
    }
}


void UzytkownikMenedzer :: wylogowanieUzytkownika() {
    idZalogowanegoUzytkownika = 0;
    cout << "Zostales wylogowany" << endl;
}


void UzytkownikMenedzer :: zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = MetodyPomocnicze :: wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> pobierzId() == idZalogowanegoUzytkownika)
        {
            itr -> ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}








