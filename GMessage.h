#include "GMessage.cpp"

#ifndef stdio
#define stdio
#include <stdio.h>
#endif

#ifndef stdlib
#define stdlib
#include <stdlib.h>
#endif

GMessage::GMessage() {
    index = 0;
    iLectureIterative = 0;
    tailleGestionnaire = 0;
    RC = OK;
}



void GMessage::Display() {
    for (int i = 0; i < index; ++i) {
        printf("%s\n", message[i]);
    }
}

void GMessage::NouveauMessage(char *messageSaisi, int* returnCode) {
    if (tailleGestionnaire >= nombreMots) {
        printf("Il y a trop de message dans el gestionnaire.\n");
        *returnCode = MESSAGETROPLONG;
    } else {
        message[tailleGestionnaire].AjoutMessage(messageSaisi, returnCode);
        tailleGestionnaire++;
    }
}