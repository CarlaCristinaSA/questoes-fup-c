#include <stdio.h>

void vaiPassar(int A, int B, int C, int H, int L) {
    int janela = L * H;
    if ( ((A * B) <= janela) || ((A * C) <= janela) ||  ((B * A) <= janela) || ((B * C) <= janela) || ((C * A) <= janela) || ((C * B) <= janela)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}

int main() {
    int valorA, valorB, valorC;
    scanf("%d %d %d\n", &valorA, &valorB, &valorC);
    int valorH, valorL;
    scanf("%d %d\n", &valorH, &valorL);
    vaiPassar(valorA, valorB, valorC, valorH, valorL);
}

