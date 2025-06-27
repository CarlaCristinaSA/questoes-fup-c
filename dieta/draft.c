#include <stdio.h>

int main() {
    int soma = 0;
    int quantidade;
    scanf("%d", &quantidade);

    int valores[quantidade];
    for(int i = 0; i < quantidade; i++) {
        scanf("%d\n", &valores[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        soma += valores[i];
    }

    float media = soma/quantidade;
    printf("%.1f\n", media);

}

