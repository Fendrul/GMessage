#ifndef GMESSAGE_CONSOLE_H
#define GMESSAGE_CONSOLE_H

#ifndef cstdio
#define cstdio
#include <cstdio>
#endif

#ifndef stdlib
#define stdlib
#include <stdlib.h>
#endif

#include <cstring>


class Console {

public:
    void Affichage(char* texte);

    void Affichage(int nombre);

    void RetourLigne();

    void Entree(int *nombre);

    void Entree(char *texte);

    bool EntreeBornee(int *nombre, int borneInferieure, int borneSuperieure);
};

#endif //GMESSAGE_CONSOLE_H