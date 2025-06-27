#include <stdio.h>

void imprimir(int A, int B) {
    if (A >= B) {
        printf("[ ");
        for(int i = A; i > B; i--) {
            printf("%d ", i);
        }
        printf("]\n");
    }
}

int main() {
    int numeroA, numeroB;
    scanf("%d %d", &numeroA, &numeroB);
    imprimir(numeroA, numeroB);
}

