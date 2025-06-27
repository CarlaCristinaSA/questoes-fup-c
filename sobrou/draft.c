#include <stdio.h>

float troco(int quantidade1, int quantidade2, int quantidade3,
    float valor1, float valor2, float valor3,
    float todoValor) {
        return todoValor - (quantidade1 * valor1 + quantidade2 * valor2 + quantidade3 * valor3);
}

int main() {
    int quantidadeUm, quantidadeDois, quantidadeTres;
    float valorUm, valorDois, valorTres;
    float valorTotal;
    scanf("%d\n%d\n%d\n%f\n%f\n%f\n%f\n", &quantidadeUm, &quantidadeDois, &quantidadeTres, &valorUm, &valorDois, &valorTres, &valorTotal);
    float trocoTotal = troco(quantidadeUm, quantidadeDois, quantidadeTres, valorUm, valorDois, valorTres, valorTotal);
    printf("%.2f\n", trocoTotal);
}

