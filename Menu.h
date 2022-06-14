#ifndef MENU_H
#define MENU_H

#include <iostream>

#include "MetodyPomocnicze.h"

using namespace std;


class Menu {

    char wybor;

public:
    Menu();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
