#include <stdio.h>

int main() {
    char frase[100];
    scanf("%[^\n]", frase);
    int tamanho = 0;
    for(int i = 0; frase[i] != '\0'; i++) {
        tamanho++;
    }

    for(int i = (tamanho - 1); i >= 0; i--) {
        printf("%c", frase[i]);
    }
    printf("\n");
}

