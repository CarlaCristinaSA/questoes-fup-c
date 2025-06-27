#include <stdio.h>

int soma(int valorUm, int valorDois, int valorTres) {
    return (valorUm + valorDois + valorTres);
}

int main() {
   int numeroUm;
    scanf("%d\n", &numeroUm);
   int numeroDois;
    scanf("%d\n", &numeroDois);
   int numeroTres;
    scanf("%d\n", &numeroTres);

   int resultado = soma(numeroUm, numeroDois, numeroTres);
   
   printf("%d\n", resultado);
}

