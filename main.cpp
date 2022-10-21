#include <iostream>
#include <cstdio>
#include "GMessage.h"
#include "Console.h"



int main() {
    char textInput [15];
    int entreeMessage = 0;
    int returnCode = 0;

    Console console;
    GMessage GMessage;

    printf(" Voulez-vous introduire un message ? \n1: Oui \n0: Non\n");
    scanf("%d", &entreeMessage);

    while (entreeMessage != 0 && entreeMessage != 1) {
        printf("Saisie incorrecte, veuillez recommencer.\n");
        scanf("%d", &entreeMessage);
    }

    while (entreeMessage) {
        console.Affichage();
        scanf("%s", textInput);

        GMessage.NouveauMessage(textInput, &returnCode);

        printf(" Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non\n");
        scanf("%d", &entreeMessage);

        while (entreeMessage != 0 && entreeMessage != 1) {
            printf("Saisie incorrecte, veuillez recommencer.\n");
            scanf("%d", &entreeMessage);
        }
    }

    GMessage.Display();

    return 0;
}