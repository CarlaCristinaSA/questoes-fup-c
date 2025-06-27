#include <stdio.h>

void simetria(int matriz[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] != matriz[j][i]) {
                printf("nao\n");
                return;
            } 
        }
    }
    printf("sim\n");
}

int main() {
    int matriz[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    simetria(matriz);
}

