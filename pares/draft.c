#include <stdio.h>

void somaPar(int A, int B) {
    int soma = 0;
    if(A <= B) {
    for (int i = A; i <= B; i++) {
        if(i%2 != 0) continue;
        soma +=i;
        }
        printf("%d\n", soma);
    }
    else printf("invalido\n");
}

int main() {
    int numeroA, numeroB;
    scanf("%d\n%d", &numeroA, &numeroB);
    somaPar(numeroA, numeroB);
}

