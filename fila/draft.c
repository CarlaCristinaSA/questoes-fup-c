#include <stdio.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int filaGeral[quantidade];
    
    
    int filaAlunos[quantidade];
    int filaProfessores[quantidade];
    int alunosI = 0;
    int professoresI = 0;
    
    for(int i = 0; i < quantidade; i++) {
        scanf("%d", &filaGeral[i]);
         if(filaGeral[i]%2 == 0) {
            filaProfessores[professoresI++] = filaGeral[i];
        } else {
            filaAlunos[alunosI++] = filaGeral[i];
        }
    }

    printf("[ ");

    for(int i = 0; i < alunosI; i++) {
        printf("%d ", filaAlunos[i]);
    }

    printf("]\n");

     printf("[ ");

    for(int i = 0; i < professoresI; i++) {
        printf("%d ", filaProfessores[i]);
    }

    printf("]\n");




}

