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


class Console {

public:
    void Affichage(char* texte);

    int Entree(int *nombre);

    void Entree(char *texte);
};

#endif //GMESSAGE_CONSOLE_H