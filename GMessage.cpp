#ifndef stdio
#define stdio
#include <cstdio>
#include "GMessage.h"

#endif

GMessage::GMessage() {
    tailleGestionnaire = 0;
    messageStocke = (Message*)malloc(sizeof(Message) * nombreMessages);
}

void GMessage::AjoutMessage(Message *messageAInserer, int *returncode) {

    //Réallocation de mémoire si gestionnaire plein
    if ((tailleGestionnaire + 1) % nombreMessages == 0) {
        messageStocke = (Message*)realloc(messageStocke, (tailleGestionnaire+1+nombreMessages) * sizeof(Message));
    }

    messageStocke[tailleGestionnaire] = *messageAInserer;
    tailleGestionnaire++;
}

void GMessage::AffichageMessages() {
    for (int i = 0; i < tailleGestionnaire; ++i) {
        messageStocke[i].Display();
    }
}

void GMessage::AffichageMessagesDebug(int debugLevelRecherche) {
    for (int i = 0; i < tailleGestionnaire; ++i) {
        messageStocke[i].AffichageDebug(debugLevelRecherche);
    }
}