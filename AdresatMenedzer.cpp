#include "AdresatMenedzer.h"

void AdresatMenedzer :: dodajAdresata() {
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

}


Adresat AdresatMenedzer :: podajDaneNowegoAdresata() {
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze :: wczytajLinie());
    adresat.ustawImie(MetodyPomocnicze :: zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze :: wczytajLinie());
    adresat.ustawNazwisko(MetodyPomocnicze :: zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze :: wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze :: wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze :: wczytajLinie());

    return adresat;
}


void AdresatMenedzer :: ustawiDZalogowanegoUzytkownika(int noweId) {
    idZalogowanegoUzytkownika = noweId;
}


int AdresatMenedzer :: pobierziDZalogowanegoUzytkownika() {
    return idZalogowanegoUzytkownika;
}


void AdresatMenedzer :: wczytajAdresatowZalogowanegoUzytkownikaZPliku() {
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}


void AdresatMenedzer :: wyczyscWektorZAdresatami() {
    adresaci.clear();
}


