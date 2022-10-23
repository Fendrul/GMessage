#ifndef GMESSAGE_GMESSAGE_H
#define GMESSAGE_GMESSAGE_H

#ifndef stdio
#define stdio
#include <stdio.h>
#endif

#ifndef stdlib
#define stdlib
#include <stdlib.h>
#endif

#include "Message.h"
#include <cstring>

#define nombreMessages 10

class GMessage {

    Message* messageStocke;
    int tailleGestionnaire;

public:
    GMessage();

    void AjoutMessage (Message *messageAInserer, int* returnCode);

    void AffichageMessages();

    void AffichageMessagesDebug(int debugLevelRecherche);
};

#endif //GMESSAGE_GMESSAGE_H