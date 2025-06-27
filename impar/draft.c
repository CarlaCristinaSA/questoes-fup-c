#include <stdio.h>

int main() {
    int par, dedosA, dedosB;
    scanf("%d\n%d\n%d\n", &par, &dedosA, &dedosB);

    if(par == 0) {
        if((dedosB + dedosA)%2 == 0) {
            printf("0\n");
        }
        else {
            printf("1\n");
        }
    }

    else if(par == 1) {
        if((dedosB + dedosA)%2 == 0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
}


