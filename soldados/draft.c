#include <stdio.h>

int main() {
    int l, c;
    scanf("%d %d", &l, &c);
    int matriz[l][c];
    int soma = 0;
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);   
        }
    }
    for(int i = 1; i < l; i++) {
        for(int j = 0; j < c; j++) {
           if(matriz[i - 1][j] > matriz[i][j]) {
            soma++;
           }
        }
    }
printf("%d\n", soma);
}

