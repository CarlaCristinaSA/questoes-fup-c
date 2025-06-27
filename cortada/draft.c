#include <stdio.h>

int quemFicou(int T, int B) {
    float areaTrapezio = ((T + B) * 70)/2;
    if(areaTrapezio > ((70 * 160)/2)) {
       return 1;
    } else if (areaTrapezio < ((70 * 160)/2)) {
        return 2;
    } else if (areaTrapezio == ((70 * 160)/2)) {
        return 0;
    }
}

int main() {
    int valorT, valorB;
    scanf("%d\n%d", &valorT, &valorB);
    printf("%d\n", quemFicou(valorT, valorB));
}

