#include <stdio.h>

int main() {
    int vetor[6];
    int matriz[4][4] = {1, 9, 27, 23, 34, 20, 37, 47, 30, 87, 55, 69, 13, 60, 99, 66};
    int soma = 0;
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            for(int x = 0; x < 6; x++) {
                if(matriz[i][j] == vetor[x]) {
                    soma++;
                }
            }
        }
    }
printf("%d\n", soma);
}

