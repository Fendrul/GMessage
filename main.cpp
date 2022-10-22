#include "GMessage.h"

#ifndef console
#define console
#include "Console.h"
#endif



int main() {
    char textInput[500];
    int intInput = 0;
    int returnCode = 0;

    Console Console;
    Message* message;
    GMessage gestMessage;

    Console.Affichage("Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non");
    Console.Entree(&intInput);

    while (intInput != 0 && intInput != 1) {
        Console.Affichage("Saisie incorrecte, veuillez recommencer");
        Console.Entree(&intInput);
    }

    while (intInput) {
        Console.Affichage("Entrez le message a enregistrer");
        Console.Entree(textInput);

        message = new Message;
        message->CreationMessage(textInput, &returnCode);
        gestMessage.AjoutMessage(message, &returnCode);

        gestMessage.AffichageMessages();

        Console.Affichage(" Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non");
        Console.Entree(&intInput);

        while (intInput != 0 && intInput != 1) {
            Console.Affichage("Saisie incorrecte, veuillez recommencer.");
            Console.Entree(&intInput);
        }
    }



    return 0;
}