#include <stdio.h>

int main() {
    int matriz[5][5];
    int principal = 0;
    int secundaria = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
            if(i == j) {
                principal += matriz[i][j];
            }
            if( i + j == 5 - 1) {
                secundaria += matriz[i][j];
            }
        }
    }
    printf ("%d\n", (principal-secundaria));
}

