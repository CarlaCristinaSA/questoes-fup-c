#include <stdio.h>

void imprimirVetor(int vetor[], int quantidade) {
    printf("[");
    for(int i = 0; i < quantidade; i++) {
        printf("%d", vetor[i]);
        if(i < quantidade - 1) {
            printf(", ");
        } 
    }
    printf("]\n");

}

int main() {
    int valor;
    scanf("%d\n", &valor);

    int array[valor];
    for(int i = 0; i < valor; i++) {
        scanf("%d\n", &array[i]);
    }

    imprimirVetor(array, valor);
}

