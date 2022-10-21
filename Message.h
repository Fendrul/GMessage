//
// Created by Simon on 21/10/2022.
//

#ifndef GMESSAGE_MESSAGE_H
#define GMESSAGE_MESSAGE_H

#include <cstdio>
#include "Message.cpp"

void Message::AjoutMessage(char *messageSaisi, int *returnCode) {
    int nombreCaracteres = NombreCaracteres(messageSaisi);
        for (int i = 0; i < nombreCaracteres; ++i) {
            message[i] = messageSaisi[i];
        }

        printf("%s\n", message);
}

int Message::NombreCaracteres(char *chaineCaracteres) {
    int totChar = 0;

    while (chaineCaracteres[totChar] != '\0') {
        totChar++;
    }

    return totChar;
}


#endif //GMESSAGE_MESSAGE_H
