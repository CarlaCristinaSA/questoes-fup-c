#include <stdio.h>

int main() {
    char frase[100];
    int indice;
    int quantidade;

    scanf("%[^\n]", frase);
    scanf("%d\n%d", &indice, &quantidade);
    int tamanho = 0;

    for(int i = 0; frase[i] != '\0'; i++) {
        tamanho++;
    }

    for(int i = indice; (i < (quantidade + indice)) && (i < tamanho); i++) {
        printf("%c", frase[i]);
    }
    printf("\n");

}

