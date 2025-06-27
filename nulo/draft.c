#include <stdio.h>

int main() {
    int valor;
    scanf("%d\n", &valor);
    if(valor > 0) {
        printf("+\n");
    }
    else if (valor == 0) {
        printf("0\n");
    }
    else {
        printf("-\n");
    }
}


