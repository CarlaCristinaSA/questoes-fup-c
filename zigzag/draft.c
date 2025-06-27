#include <stdio.h>

void zigzag(int A, int B) {
    for (int i = A; i <= B; i++) {
        if((i%3 == 0)&& (i%5 == 0)) printf("zigzag\n");
        else if(i%3 == 0) printf("zig\n");
        else if(i%5 == 0) printf("zag\n");
        else printf("%d\n", i);
    }
}

int main() {
    int valorA, valorB;
    scanf("%d\n%d", &valorA, &valorB);
    zigzag(valorA, valorB);
}

