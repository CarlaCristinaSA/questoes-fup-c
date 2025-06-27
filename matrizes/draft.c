#include <stdio.h>

int main() {
    int linhas, colunas;
    scanf("%d%d", &linhas, &colunas);

    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];
    int matrizC[linhas][colunas];

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

   for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    
    for(int i = 0; i < linhas; i++) {
        printf("[ ");
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("]\n");
    }
}

