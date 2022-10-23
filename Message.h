#ifndef GMESSAGE_MESSAGE_H
#define GMESSAGE_MESSAGE_H

#ifndef cstdio
#define cstdio
#include <cstdio>
#endif

#ifndef stdlib
#define stdlib
#include <stdlib.h>
#endif

#ifndef console
#define console
#include "Console.h"
#endif

#include <time.h>
#include <cstring>

#define Warning 1
#define Debug 2
#define System 3

class Message {
    char* message;
    char* date;
    int messageType;
    int debugLevel;
    Console Console;

public:
    Message();

    Message(char *messageInput, int typeMessageInput, int debugLevelInput, int *returnCode);

    void Display();

    void AffichageDebug(int debugLevelRecherche);

private:
    int ComptageCaracteres(char *chaineCaracteres);

    char *MessageTypeIntToText(int debugLevel);
};



#endif //GMESSAGE_MESSAGE_H
