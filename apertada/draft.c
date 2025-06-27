#include <stdio.h>
#include <limits.h>

int main() {
    int menor = INT_MAX;
    int vetor[5];


    for(int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

     for(int i = 0; i < 5; i++) {
        if(vetor[i] < menor) menor = vetor[i];
    }
    printf("%d\n", menor);
}

