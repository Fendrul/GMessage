#include "Message.h"

void Message::CreationMessage(char *messageSaisi, int *returnCode) {
    int nombreCaracteres = ComptageCaracteres(messageSaisi);
    message = (char*)malloc(sizeof(char) * (nombreCaracteres + 1));

    for (int i = 0; i < nombreCaracteres + 1; ++i) {
        message[i] = messageSaisi[i];
    }
}

int Message::ComptageCaracteres(char *chaineCaracteres) {
    int totChar = 0;

    while (chaineCaracteres[totChar] != '\0') {
        totChar++;
    }

    return totChar;
}

void Message::Display() {
    Console.Affichage(message);
}
