#include <stdio.h>

int main() {
    int quantidade;
    scanf("%d\n", &quantidade);

    int vetor[quantidade];

    for(int i = 0; i < quantidade; i++) {
        scanf("%d\n", &vetor[i]);
        printf("%d\n", vetor[i]);
    }

}

