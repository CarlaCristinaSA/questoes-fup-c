#include <stdio.h>

typedef struct {
    char nome[101];
    float notas[3];
    float media;
}Aluno;

void ordenacao(Aluno vet[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int menor = i;

        for(int j = i+1; j < size; j++) {
            if(vet[j].media > vet[menor].media) {
               menor = j;
            }
        }

        if(menor != i) {
            Aluno temp;
            temp = vet[i];
            vet[i] = vet[menor];
            vet[menor] = temp;
        }
    }
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    
    Aluno alunos[quantidade];
    for(int i = 0; i < quantidade; i++) {
        scanf(" %[^\n]", alunos[i].nome);
        for(int j = 0; j < 3; j++) {
            scanf(" %f", &alunos[i].notas[j]);
        }
    }
    
    for(int i = 0; i < quantidade; i++) {
        float soma = 0.0;
        for(int j = 0; j < 3; j++) {
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma/3;
    }

    ordenacao(alunos, quantidade);

    for(int i = 0; i < quantidade; i++) {
        printf("%d: %s\n   Media: %.2f\n   N1: %.2f, N2: %.2f, N3: %.2f\n", i, alunos[i].nome, alunos[i].media,
            alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
    }

}

