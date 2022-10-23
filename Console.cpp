#include "Console.h"


void Console::Affichage(char *texte) {
    printf("%s\n", texte);
    fflush(stdout);
}

void Console::Entree(int *nombre) {
    scanf("%d", nombre);
}

/**
 * Effectue une saisie sur nombre et  préviens si celle-ci est à l'extérieur des bornes délimitées
 * @return True si dans les bornes, false si en dehors
 */
bool Console::EntreeBornee(int *nombre, int borneInferieure, int borneSuperieure) {
    scanf("%d", nombre);

    if (*nombre % 1 != 0 || *nombre < borneInferieure || *nombre > borneSuperieure) {
        return true;
    } else {
        return false;
    }
}

void Console::Entree(char *texte) {
    scanf("%c");
    scanf("%[^\n]", texte);
}