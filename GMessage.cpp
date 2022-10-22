#ifndef stdio
#define stdio
#include <cstdio>
#include "GMessage.h"

#endif


#define OK 0
#define FULL 1
#define MESSAGETROPLONG 2


GMessage::GMessage() {
    tailleGestionnaire = 0;
}

void GMessage::AjoutMessage(struct Message messageAInserer, int *returncode) {
    Message[tailleGestionnaire] = messageAInserer;
    tailleGestionnaire++;
}
