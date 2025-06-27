#include <stdio.h>

void calculoMedia(int notaUm, int notaDois, int notaTres) {
    float mediaInicial = (notaUm + notaDois)/2;
    if( mediaInicial >= 7) printf("aprovado\n");
     
    else if (mediaInicial >= 4 && mediaInicial < 7) {
        float mediaFinal = (mediaInicial + notaTres)/2;
        if(mediaFinal >= 5) {
            printf("aprovado na final\n");
        } else {
            printf("reprovado na final\n");
        }
    } 
    
    else printf("reprovado\n");

}

int main() {
   int provaUm, provaDois, provaFinal;
   scanf("%d\n%d\n%d\n", &provaUm, &provaDois, &provaFinal);
   calculoMedia(provaUm, provaDois, provaFinal); 
}

