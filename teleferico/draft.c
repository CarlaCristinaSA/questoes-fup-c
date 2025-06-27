#include <stdio.h>

void quantidadeViagens(int capacidade, int total) {
    int valor = total/capacidade;
    int viagens = (total + valor)/(capacidade - 1);
    printf("%d\n", viagens);

}

int main() {
    int capacidadeMaxima, totalAlunos;
    scanf("%d\n%d", &capacidadeMaxima, &totalAlunos);
    quantidadeViagens(capacidadeMaxima, totalAlunos);

}

