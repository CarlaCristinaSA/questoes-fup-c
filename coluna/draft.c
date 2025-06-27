#include <stdio.h>

int main() {
    int valor;
    scanf("%d", &valor);
    int maior = -1000;
    int coluna = 0;
    int matriz[valor][valor];
    for(int i = 0; i < valor; i++) {
        for(int j = 0; j < valor; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int j = 0; j < valor; j++) {
        int soma = 0;
        for(int i = 0; i < valor; i++) {
        soma += matriz[i][j] * matriz[i][j];
        }

        if(soma > maior) {
            maior = soma;
            coluna = j;
            }
    }   
    printf("%d\n", coluna);
}

