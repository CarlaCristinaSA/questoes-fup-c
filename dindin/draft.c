#include <stdio.h>

int main() {
    int contadorC = 0, contadorL = 0;
    int contadorM = 0, contadorT = 0;

    int quantidade;
    scanf("%d", &quantidade);

    char sabores[quantidade];
    char turnos[quantidade];

    for(int i = 0; i < quantidade; i++) {
        scanf(" %c %c ", &sabores[i], &turnos[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        if(sabores[i] == 'c') contadorC++;
        else if(sabores[i] == 'l') contadorL++;
        if(turnos[i] == 'm') contadorM++;
        else if(turnos[i] == 't') contadorT++;
    }

    if(contadorC > contadorL) printf("c\n");
    else if(contadorL > contadorC) printf("l\n");
    else printf("empate\n");

    if(contadorM < contadorT) printf("m\n");
    else if(contadorT < contadorM) printf("t\n");
    else printf("empate\n");


}
