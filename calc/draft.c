#include <stdio.h>

int main() {
    int valorUm, valorDois;
    char operador;

    scanf("%d\n%d\n %c\n", &valorUm, &valorDois, &operador);

    if(operador == '+') {
       int soma = (valorUm + valorDois);
        printf("%d\n", soma);
    }

    else if (operador == '-') {
        int subtracao = (valorUm - valorDois);
        printf("%d\n", subtracao);
    }

    else if (operador == '*') {
        int multiplicacao = (valorUm * valorDois);
        printf("%d\n", multiplicacao);
    }

    else if (operador == '/') {
        int divisao = (valorUm / valorDois);
        printf("%d\n", divisao);
    }

}

