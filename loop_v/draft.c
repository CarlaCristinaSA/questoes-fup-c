#include <stdio.h>

void imprimir(int A, int B) {
    printf("[ ");
    for(int i = A; i < B; i++) {
        if(i%2 == 0) {
            continue;
        }
        else if(i == B) {
            break;
        }
        printf("%d ", i);
    }
    printf("]\n");
}

int main() {
    int numeroA, numeroB;
    scanf("%d %d", &numeroA, &numeroB);
    imprimir(numeroA, numeroB);
}

