#include <iostream>
#include <cstdio>
#include "GMessage.h"
#include "Console.h"



int main() {
    char textInput[20];
    int intInput = 0;
    int returnCode = 0;

    Console Console;
    Message Message;
    GMessage GMessage;

    Console.Affichage("Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non");
    Console.Entree(&intInput);

    while (intInput != 0 && intInput != 1) {
        Console.Affichage("Saisie incorrecte, veuillez recommencer");
        Console.Entree(&intInput);
    }

    while (intInput) {
        Console.Affichage("Entrez le message à enregistrer");
        Console.Entree(textInput);

        Message.CreationMessage(textInput, &returnCode);
        GMessage.AjoutMessage(Message, &returnCode);

        Console.Affichage(" Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non");
        Console.Entree(&intInput);

        while (intInput != 0 && intInput != 1) {
            Console.Affichage("Saisie incorrecte, veuillez recommencer.");
            Console.Entree(&intInput);
        }
    }

    GMessage.AffichageMessages();

    return 0;
}