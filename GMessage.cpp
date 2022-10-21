#ifndef stdio
#define stdio
#include <cstdio>
#endif

#include "Message.h"

#define OK 0
#define FULL 1
#define MESSAGETROPLONG 2

#define nombreMots 3

class GMessage {

    Message message[nombreMots];
    int index;
    int iLectureIterative;
    int tailleGestionnaire;
    int RC;

public:
    GMessage();
    void NouveauMessage(char *messageSaisi, int* returnCode);
    void Display();
};



