#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;
    int contador = 0;

    scanf("%d", &quantidade);
    int animais[quantidade];
    
    for(int i = 0; i < quantidade; i++) {
        scanf("%d", &animais[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        for(int j = 0; j < quantidade; j++) {
            if(abs(animais[i]) == abs(animais[j])) {
                contador++;
            }
        }
    }

    printf("%d\n", contador);
}

