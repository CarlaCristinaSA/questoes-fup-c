#include <stdio.h>

void esconde(int valor) {
    for(int i = 0; i <= valor; i++) {
        if(i%2 != 0) printf("%d\n", i);
    }
    for (int i = valor; i >= 0; i--) {
        if(i%2 == 0) printf("%d\n", i);
    }
}

int main() {
   int numero;
   scanf("%d", &numero);
   esconde(numero);
}

