#include <stdio.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int cartas[quantidade];
    
    for(int i = 0; i < quantidade; i++) {
        scanf(" %d", &cartas[i]);
    }


    printf("[");

    for(int i = 0; i < quantidade; i++) {
        if(i != (quantidade - 1)) {
            if(cartas[i] == 1) printf("A, ");
            else if(cartas[i] == 11) printf("J, ");
            else if(cartas[i] == 12) printf("Q, ");
            else if(cartas[i] == 13) printf("K, ");
            else printf("%d, ", cartas[i]);
        } 
        else {
            if(cartas[i] == 1) printf("A");
            else if(cartas[i] == 11) printf("J");
            else if(cartas[i] == 12) printf("Q");
            else if(cartas[i] == 13) printf("K");
            else printf("%d", cartas[i]);
        }
    }


    printf("]\n");
}

