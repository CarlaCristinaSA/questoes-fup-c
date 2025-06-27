#include <stdio.h>

float media(int numeroUm, int numeroDois) {
    return (numeroUm + numeroDois) / 2.0;
}

int main() {
    int valorUm, valorDois;
    scanf("%d\n%d", &valorUm, &valorDois);

    float resultado = media(valorUm, valorDois);
    printf("%.1f\n", resultado);
}

