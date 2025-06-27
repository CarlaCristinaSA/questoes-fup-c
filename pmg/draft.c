#include <stdio.h>

double mediaValor(int vet[], int quantidade) {
    int soma = 0; 
    for(int i = 0; i < quantidade; i++) {
        soma += vet[i]; 
    }
    return soma/quantidade;
}

int main() {
    int quantidade;
    scanf("%d\n", &quantidade);
    double altura[quantidade];

    for(int i = 0; i < quantidade; i++) {
        scanf("%lf\n", &altura[i]);
    }

    double media = mediaValor(altura[quantidade], quantidade);
    for(int i = 0; i < quantidade; i++) {
        if(altura[i] < media) {
            printf("%lf P", altura[i]);
        }
        else if(altura[i] == media) {
            printf("%lf M", altura[i]);
        } else {
            printf("%lf G", altura[i]);
        }
    }
 
}

