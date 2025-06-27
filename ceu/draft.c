#include <stdio.h>

void amarelinha(int pedra) {
    printf("[ ");
    for(int i = 0; i <= 9; i++) {
        if(i == pedra) {
            continue;
        }
        printf("%d ", i);
    }

    if(pedra != 10) printf("ceu ]\n");
    else printf("]\n");
}

int main() {
    int valorPedra;
    scanf("%d", &valorPedra);
    amarelinha(valorPedra);
}

