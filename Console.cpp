#include "Console.h"


void Console::Affichage(char *texte) {
    printf("%s\n", texte);
    fflush(stdout);
}

int Console::Entree(int *nombre) {
    scanf("%d", nombre);
}

void Console::Entree(char *texte) {
    scanf("%s", texte);
}