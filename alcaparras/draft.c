#include <stdio.h>

int main() {
    char letra;
    char texto[100];
    scanf("%[^\n]\n%c", texto, &letra);
    int contador = 0;

    for(int i = 0; texto[i] != '\0'; i++) {
        if(texto[i] == letra) {
            contador++;
        }
    }

    printf("%d\n", contador);
    return 0;
}

