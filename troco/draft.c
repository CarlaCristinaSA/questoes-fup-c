#include <stdio.h>

int main() {
    float valorT;
    scanf("%f", &valorT);
    int valor = valorT * 100;
    int cedulas[11] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5};

    for(int i = 0; i < 11; i++) {
        int quantidade = valor/cedulas[i];
        valor = valor % cedulas[i];
        if(quantidade != 0) {
            printf("%d de %.2f\n", quantidade, (float)cedulas[i]/100);
        }
    }

    if(valor < 5 && valor > 0) {
        printf("Falta %.2f\n", (float)valor/100);
    }
}

