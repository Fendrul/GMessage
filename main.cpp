#include "GMessage.h"

#ifndef console
#define console
#include "Console.h"
#endif



int main() {
    char textInput[100];
    int intInput = 0;
    int returnCode = 0;

    char* typeMessage;
    int debugLevel;

    Console Console;
    Message* message;
    GMessage gestMessage;

    Console.Affichage("Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non");

    while (Console.EntreeBornee(&intInput, 0, 1)) {
        Console.Affichage("Saisie incorrecte, veuillez recommencer");
    }

    while (intInput) {
//        Enregistrement du message à stocker
        Console.Affichage("Entrez le message a enregistrer");
        Console.Entree(textInput);

//        Enregistrement du type de message
        Console.Affichage("Quel est le type de votre message ?\n"
                          "1: Warning\n"
                          "2: Debug\n"
                          "3: Systeme");
        while (Console.EntreeBornee(&intInput, 1, 3)) {
            Console.Affichage("Saisie incorrecte, recommencez");
        }
        switch (intInput) {
            case 1:
                typeMessage = "warning";
                break;
            case 2:
                typeMessage = "Debug";
                break;
            case 3:
                typeMessage = "Systeme";
        }

//        Enregistrement du niveau de debug
        Console.Affichage("Quel est le niveau de debug ?\n"
                          "Celui-ci peut se trouver par importance croissante, de 0 à 6");
        while (Console.EntreeBornee(&debugLevel, 0, 6)) {
            Console.Affichage("Saisie incorrecte, recommencez");
        }

//        Création du message avec les données récoltées et entrée de celui-ci dans le gestionnaire
        message = new Message(textInput, typeMessage, debugLevel, &returnCode);
        gestMessage.AjoutMessage(message, &returnCode);
        gestMessage.AffichageMessages();

        Console.Affichage("Voulez-vous introduire un nouveau message ? \n1: Oui \n0: Non");
        while (Console.EntreeBornee(&intInput, 0, 1)) {
            Console.Affichage("Saisie incorrecte, veuillez recommencer");
        }
    }



    return 0;
}