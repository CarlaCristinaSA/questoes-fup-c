#include <stdio.h>

void filhos(int filhoA, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        int idade = filhoA + (2 * i);
        printf("%d\n", idade);
    }
}

int main() {
    int valorA, quantidade;
    scanf("%d\n%d", &valorA, &quantidade);
    filhos(valorA, quantidade);
}

