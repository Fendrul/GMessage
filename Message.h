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

#define tailleMot 20

class Message {
    char* message;
    char typeMessage[10];
    Console Console;

public:
    void CreationMessage(char *messageSaisi, int *returnCode);
    void Display();

private:
    int ComptageCaracteres(char *chaineCaracteres);
};



#endif //GMESSAGE_MESSAGE_H
