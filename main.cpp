#include "GMessage.h"

#ifndef console
#define console
#include "Console.h"
#endif



int main() {
    char textInput[100];
    int intInput = 0;
    int returnCode = 0;

    int typeMessage;
    int debugLevel;

    Console Console;
    Message* message;
    GMessage gestMessage;

    Console.Affichage("Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non\n");

    while (Console.EntreeBornee(&intInput, 0, 1)) {
        Console.Affichage("Saisie incorrecte, veuillez recommencer");
    }

    while (intInput) {
//        Enregistrement du message à stocker
        Console.Affichage("Entrez le message a enregistrer : ");
        Console.Entree(textInput);

//        Enregistrement du type de message
        Console.Affichage("Quel est le type de votre message ?\n"
                          "1: Warning\n"
                          "2: Debug\n"
                          "3: Systeme\n");
        while (Console.EntreeBornee(&typeMessage, 1, 3)) {
            Console.Affichage("Saisie incorrecte, recommencez");
        }


//        Enregistrement du niveau de Debug
        Console.Affichage("Quel est le niveau de Debug ?  "
                          "Celui-ci peut se trouver par importance croissante, de 0 a 6");
        while (Console.EntreeBornee(&debugLevel, 0, 6)) {
            Console.Affichage("Saisie incorrecte, recommencez");
        }

//        Création du message avec les données récoltées et entrée de celui-ci dans le gestionnaire
        message = new Message(textInput, typeMessage, debugLevel, &returnCode);
        gestMessage.AjoutMessage(message, &returnCode);
        gestMessage.AffichageMessages();

        Console.Affichage("Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non\n");
        while (Console.EntreeBornee(&intInput, 0, 1)) {
            Console.Affichage("Saisie incorrecte, veuillez recommencer");
        }
    }

//    Début de le phase debugging
    Console.Affichage("Voulez-vous entrez dans la session debugging ?\n1: Oui\n0: Non\n");

    if (!Console.EntreeBornee(&intInput, 0, 1)) {
        Console.Affichage("Entrez le niveau de Debug desire");
        while (Console.EntreeBornee(&intInput, 0, 6)) {
            Console.Affichage("Le niveau de Debug doit se trouver entre 1 et 6.");
        }

        gestMessage.AffichageMessagesDebug(intInput);
    }

    return 0;
}