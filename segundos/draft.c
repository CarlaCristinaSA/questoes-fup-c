#include <stdio.h>

int main() {
    int segundosTotal, hora, minuto, segundosFinal;
    scanf("%d", &segundosTotal);

    hora = segundosTotal / 3600;
    int resto = segundosTotal % 3600;
    minuto = resto / 60;
    segundosFinal = resto % 60;
    
    printf("%d:%d:%d\n", hora, minuto, segundosFinal);

}

