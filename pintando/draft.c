#include <stdio.h>
#include <math.h>

double area(int ladoUm, int ladoDois, int ladoTres, double p) {
    return sqrt(p * (p - ladoUm) * (p - ladoDois) * (p - ladoTres));
}

int main() {
    double ladoA, ladoB, ladoC;
    scanf("%lf\n%lf\n%lf", &ladoA, &ladoB, &ladoC);
    double perimetro = (ladoA + ladoB + ladoC) / 2;
    double areaTotal = area(ladoA, ladoB, ladoC, perimetro);
    printf("%.2lf\n", areaTotal);
}

