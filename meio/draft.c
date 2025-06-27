#include <stdio.h>

int meio(int valorUm, int valorDois, int valorTres) {
    int maior = valorUm;
    if(valorDois > maior) maior = valorDois;
    if(valorTres > maior) maior = valorTres;
    int menor = valorUm;
    if(valorDois < menor) menor = valorDois;
    if(valorTres < menor) menor = valorTres;
    return (valorUm + valorDois + valorTres) - menor - maior;
}

int main() {
    int valorA, valorB, valorC;
    scanf("%d\n%d\n%d", &valorA, &valorB, &valorC);

    printf("%d\n", meio(valorA, valorB, valorC));
}

