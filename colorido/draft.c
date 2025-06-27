#include <stdio.h>

void amarelinhaTrocando(int pedra, char perna) {
    char pernaAtual = perna;
    printf("[ ");
    for (int i = 0; i <= 9; i++) {
        if(pedra == i) {
            continue;
        }
        printf("%d%c ", i, pernaAtual);

        if(pernaAtual == 'd') pernaAtual = 'e';
        else pernaAtual = 'd';
    }
    if(pedra != 10) {
        printf("ceu ]\n");
    } else printf("]\n");

}

int main() {
    int valorPedra;
    char valorPerna;
    scanf("%d\n %c", &valorPedra, &valorPerna);
    amarelinhaTrocando(valorPedra, valorPerna);
}

