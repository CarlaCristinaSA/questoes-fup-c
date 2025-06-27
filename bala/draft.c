#include <stdio.h>
#include <math.h>

double distancia(double pontoX1, double pontoX2, double pontoY1, double pontoY2) {

    return sqrt(pow((pontoX2 - pontoX1), 2) + pow((pontoY2 - pontoY1), 2));
}

int main() {
    double coordenadaX1, coordenadaX2, coordenadaY1, coordenadaY2;
    scanf("%lf\n%lf\n%lf\n%lf\n", &coordenadaX1, &coordenadaY1, &coordenadaX2, &coordenadaY2);
    double  distanciaEntreDoisPontos = distancia(coordenadaX1, coordenadaX2, coordenadaY1, coordenadaY2);
    printf("%.2lf\n", distanciaEntreDoisPontos);
}

