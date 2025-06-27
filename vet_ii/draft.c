#include <stdio.h>

void imprimirVetor(int quantidade, int vetor[quantidade]) {
    printf("[ ");
    for(int i = 0; i < quantidade; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");
}

int main() {
    int valor = 0;
    scanf("%d\n", &valor);
    int array[valor];
    for(int i = 0; i < valor; i++) {
        scanf("%d\n", &array[i]);
    }
    imprimirVetor(valor, array);
}

