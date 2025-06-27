#include <stdio.h>

void descobrindoIdade(int M, int A, int B) {
    if((M >= 40 && M <= 110) && (A >= 1 && A < M) && (B >= 1 && B < M) && (A != B) ) {
    int filhoC = (M - (A + B));
    int maior = A > B ? A : B;
    maior = filhoC > maior ? filhoC : maior;
    printf("%d\n", maior);
}
}



int main() {
    int mae, filhoA, filhoB;
    scanf("%d\n%d\n%d", &mae, &filhoA, &filhoB);

    descobrindoIdade(mae, filhoA, filhoB);
}

