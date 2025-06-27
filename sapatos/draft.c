#include <stdio.h>

void sapatos(int A, int B) {
    if(A > B) {
        printf("invalido\n");
        return;
    }
        
    int contador = 0;
    for(int i = A; i <= B; i++) {
        if(i%2 == 0 && i%3 == 0) {
            contador+=i;
            }
        }
        printf("%d\n", contador);
}

int main() {
    int valorA, valorB;
    scanf("%d\n%d", &valorA, &valorB);
    sapatos(valorA, valorB);
}

