#include "Message.h"

Message::Message() {}

Message::Message(char *messageInput, int typeMessageInput, int debugLevelInput, int *returnCode) {
    time_t now = time(0);
    date = ctime(&now);

    int nombreCaracteres = ComptageCaracteres(messageInput);
    message = (char*)malloc(sizeof(char) * (nombreCaracteres + 1));
    for (int i = 0; i < nombreCaracteres + 1; ++i) {
        message[i] = messageInput[i];
    }

    messageType = typeMessageInput;
    debugLevel = debugLevelInput;
}

int Message::ComptageCaracteres(char *chaineCaracteres) {
    int totChar = 0;

    while (chaineCaracteres[totChar] != '\0') {
        totChar++;
    }

    return totChar;
}

/**
 * Cette fonction affiche le message seulement si c'est un Debug et que son niveau de Debug est suffisant
 * @param debugLevelRecherche
 */
void Message::AffichageDebug(int debugLevelRecherche) {
    if (messageType == Debug & debugLevelRecherche <= debugLevel) {
        Display();
    }
}

/**
 * intMessageType étant stocké en int, cette fct le converti en texte afin de pouvoir s'afficher sur la console
 * @param intMessageType
 * @return la version texte du debug
 */
char* Message::MessageTypeIntToText(int intMessageType) {
    char* charMessageType = NULL;

    switch (intMessageType) {
        case Warning:
            charMessageType = "Warning";
            break;

        case Debug:
            charMessageType = "Debug";
            break;

        case System:
            charMessageType = "System";
            break;
    }

    return charMessageType;
}

void Message::Display() {
    Console.Affichage(message);

    Console.Affichage("\nEn date du : ");
    Console.Affichage(date);

    Console.Affichage("Type de message : ");
    Console.Affichage(MessageTypeIntToText(messageType));

    Console.Affichage("\nNiveau de Debug : ");
    Console.Affichage(debugLevel);
    Console.RetourLigne();
}