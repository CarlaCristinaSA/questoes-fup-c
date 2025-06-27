#include <stdio.h>

int main() {
   int quantidade;
   scanf("%d\n", &quantidade);
   int exercito[quantidade];

   int soldados = 0;
   int espiao = 0;

   for(int i = 0; i < quantidade; i++) {
    scanf("%d\n", &exercito[i]);
   }

   for(int i = 0; i < quantidade; i++) {
    if(exercito[i]%2 == 0) {
        espiao += exercito[i];
    } else {
        soldados += exercito[i];
    }
}

    if(soldados > espiao) {
        printf("soldados\n");
    } else if(soldados < espiao) {
        printf("rebeldes\n");
    } else {
        printf("empate\n");
    }

   }

