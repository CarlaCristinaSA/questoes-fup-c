#include <stdio.h>
#include <limits.h>

int main() {
    int menor = INT_MAX;
    int menorIndice = 0;
    int quantidade;
    scanf("%d", &quantidade);

    int pedraA[quantidade];
    int pedraB[quantidade];
    int pontuacao[quantidade];

    for(int i = 0; i < quantidade; i++) {
        scanf("%d %d", &pedraA[i], &pedraB[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        if((pedraA[i] >= 10) && (pedraB[i] >= 10)) {
            pontuacao[i] = abs(pedraA[i] - pedraB[i]);
            if(pontuacao[i] < menor) {
                menor = pontuacao[i];
                menorIndice = i;
            }
        }
    }

   
    if(menorIndice == 0) {
        printf("sem ganhador\n");
    } else {
        printf("%d\n", menorIndice);
    }
}

