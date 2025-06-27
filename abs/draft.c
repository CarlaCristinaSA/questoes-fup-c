#include <stdio.h>
#include <stdlib.h>

int valorAbs(int valor) {
    return abs(valor);
}

int main() {
    int valorUm, valorDois;
    scanf("%d\n%d\n", &valorUm, &valorDois);
    int valorAbsoluto = abs(valorUm - valorDois);
    printf("%d\n", valorAbsoluto);
}

