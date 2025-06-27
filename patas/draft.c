#include <stdio.h>
#include <stdlib.h>

int main() {
    int chuteChico, chuteCebolinha;
    int quantidade;
    int soma = 0;
    scanf("%d\n%d\n%d\n", &chuteChico, &chuteCebolinha, &quantidade);

    char animais[quantidade];
    for (int i = 0; i < quantidade; i++) {
        scanf(" %c\n", &animais[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        if(animais[i] == 'v') {
            soma += 4;
        } else if(animais[i] == 'g') {
            soma += 2;
        } else if(animais[i] == 'c') {
            soma += 4;
        }
    }

    printf("%d\n", soma);

    int aprox_Cebolinha = abs(soma - chuteCebolinha);
    int aprox_Chico = abs(soma - chuteChico);

    if(aprox_Cebolinha < aprox_Chico) {
        printf("Cebolinha\n");
    } else if(aprox_Cebolinha > aprox_Chico) {
        printf("Chico Bento\n");
    } else {
        printf("empate\n");
    }

}

