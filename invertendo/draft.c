#include <stdio.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int vetor[quantidade];
    for(int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[ ");

    for(int i = (quantidade - 1); i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("]\n");
}

