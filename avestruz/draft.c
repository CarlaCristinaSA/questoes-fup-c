#include <stdio.h>

int main() {
    char frase[100];
    char letra;
    scanf("%[^\n]\n", frase);
    scanf(" %c", &letra);
    int contador = 0;

    if(letra >= 'A' && letra <= 'Z') {
        letra+=32;
    }

    for(int i = 0; frase[i] != '\0'; i++) {
        char aux = frase[i];
        if(aux >= 'A' && aux <= 'Z') {
            aux +=32;
        }

        if(letra == aux) {
            contador++;
        }
    }

    printf("%d\n", contador);
}

