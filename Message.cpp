#include "Message.h"

Message::Message() {
}

Message::Message(char *messageInput, char *typeMessageInput, int debugLevelInput, int *returnCode) {
    time_t now = time(0);
    date = ctime(&now);

    int nombreCaracteres = ComptageCaracteres(messageInput);
    message = (char*)malloc(sizeof(char) * (nombreCaracteres + 1));

    for (int i = 0; i < nombreCaracteres + 1; ++i) {
        message[i] = messageInput[i];
    }

    strcpy(typeMessage, typeMessageInput);
    debulLevel = debugLevelInput;
}

int Message::ComptageCaracteres(char *chaineCaracteres) {
    int totChar = 0;

    while (chaineCaracteres[totChar] != '\0') {
        totChar++;
    }

    return totChar;
}

void Message::Display() {
    char* messTemp = message;
    strcat(messTemp, " a la date du : ");
    strcat(messTemp, date);
    Console.Affichage(messTemp);

    strcpy(messTemp, "Type de message : ");
    strcat(messTemp, typeMessage);
    Console.Affichage(messTemp);
    Console.Affichage("");
}
