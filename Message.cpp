//
// Created by Simon on 21/10/2022.
//

#define tailleMot 15

class Message {
    char message[tailleMot];
    char typeMessage[10];

private:
    int NombreCaracteres(char *chaineCaracteres);

public:
    void AjoutMessage(char *messageSaisi, int *returnCode);
};
