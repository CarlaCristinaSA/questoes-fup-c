#include <stdio.h>
#include <math.h>

void bhaskara(float A, float B, float C) {
    float delta = pow(B, 2) - (4*A*C);

    if(delta > 0) {
        float raizUm = ((-B) + sqrt(delta))/(2*A);
        float raizDois =  ((-B) - sqrt(delta))/(2*A);
        printf("%.2f\n%.2f\n", raizUm, raizDois);
    } 

    else if(delta == 0) {
        float raiz = (-B + sqrt(delta))/(2*A);
        printf("%.2f\n", raiz);
    } 

    else {
        printf("nao ha raiz real\n");
    }
}

int main() {
    float valorA, valorB, valorC;
    scanf("%f\n%f\n%f\n", &valorA, &valorB, &valorC);
    bhaskara(valorA, valorB, valorC);

}

