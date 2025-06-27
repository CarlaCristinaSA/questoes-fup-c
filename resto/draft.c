#include <stdio.h>

int quociente(int valorUm, int valorDois) {
    return (valorUm / valorDois);
}

int resto(int valorUm, int valorDois) {
    return valorUm % valorDois;
}

int main() {
    int numeroUm;
    int numeroDois;
        scanf("%d %d", &numeroUm, &numeroDois);
    int quoc = quociente(numeroUm, numeroDois);
    int rest = resto(numeroUm, numeroDois); 
    printf("%d %d\n", quoc, rest);
}


