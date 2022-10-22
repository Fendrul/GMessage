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

#define nombreMots 5

class GMessage {

    Message Message[nombreMots];
    int tailleGestionnaire;

public:
    GMessage();

    void AjoutMessage (class Message messageAInserer, int* returnCode);

    void AffichageMessages() {
        for (int i = 0; i < tailleGestionnaire; ++i) {
            Message[i].Display();
        }
    }
};

#endif //GMESSAGE_GMESSAGE_H