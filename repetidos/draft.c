#include <stdio.h>

int main() {
    int modelo;
    int quantidade;
    int contador = 0;
    scanf("%d %d", &modelo, &quantidade);
    int vetor[quantidade];

    for(int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        if(vetor[i] == modelo) contador++;
    }

    printf("%d\n", contador);
}

