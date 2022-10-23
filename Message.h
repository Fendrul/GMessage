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

class Message {
    char* message;
    char* date;
    char typeMessage[10];
    int debulLevel;
    Console Console;

public:
    Message();
    Message(char *messageInput, char *typeMessageInput, int debugLevelInput, int *returnCode);
    void Display();

    Message(char string[100], char *string1, int i, int i1);

private:
    int ComptageCaracteres(char *chaineCaracteres);
};



#endif //GMESSAGE_MESSAGE_H
