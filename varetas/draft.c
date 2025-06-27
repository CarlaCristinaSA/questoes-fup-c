#include <stdio.h>

void triangulo(int c1, int c2, int c3) {
     if((c1 >= (c2 + c3)) || (c2 >= (c1 + c3)) || (c3 >= (c2 + c1))) {
        printf("False\n");
     } else printf("True\n");
}

int main() {
    int comprimentoUm, comprimentoDois, comprimentoTres;
    scanf("%d\n%d\n%d", &comprimentoUm, &comprimentoDois, &comprimentoTres);
    triangulo(comprimentoUm, comprimentoDois, comprimentoTres);
}

