#include <stdio.h>

void imprimir(int A, int  B) {
    for (int i = A; i < B; i++) {
        printf("%d\n", i);
    }
}

int main() {
    int numeroA, numeroB;
    scanf("%d\n%d", &numeroA, &numeroB);
    imprimir(numeroA, numeroB);
}

