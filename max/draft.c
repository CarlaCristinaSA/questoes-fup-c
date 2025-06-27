#include <stdio.h>

int maior(int valorUm, int valorDois) {
    if(valorUm > valorDois) {
        return valorUm;
    }

    else if(valorDois > valorUm) {
        return valorDois;
    }

    else if(valorUm == valorDois) {
        return valorDois;
    }
}

int main() {
    int numeroUm, numeroDois;
    scanf("%d\n%d\n", &numeroUm, &numeroDois);
    int numeroMaior = maior(numeroUm, numeroDois);
    printf("%d\n", numeroMaior);
}

