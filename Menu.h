#ifndef MENU_H
#define MENU_H

#include <iostream>

#include "MetodyPomocnicze.h"

using namespace std;


class Menu {

public:
    Menu();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuEdycjaAdresata();
};

#endif
