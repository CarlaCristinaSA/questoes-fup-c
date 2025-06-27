#include <stdio.h>

void imprimir(int A, int B) {
    int direcao = A < B ? 1:-1;
    printf("[ ");

    for(int i = A; i != B; i += direcao) {
        printf("%d ", i);
    }
    printf("]\n");
}

int main() {
    int numeroA, numeroB;
    scanf("%d %d", &numeroA, &numeroB);
    imprimir(numeroA, numeroB);
}

