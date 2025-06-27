#include <stdio.h>

double conversor(double celsius) {
    return 1.8 * celsius + 32;
}

int main() {
    double celsius;
    scanf("%lf", &celsius);
    double conversao = conversor(celsius);
    printf("%.6lf\n", conversao);    
}

