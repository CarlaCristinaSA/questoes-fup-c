#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[101];
    int pontuacao;
}Pizzaria;

int main() {
    int quantidade;
    scanf("%d", &quantidade);
    Pizzaria pizzas[quantidade];
    Pizzaria maior;
    maior.pontuacao = -1;
    for(int i = 0; i < quantidade; i++) {
        scanf("%s\n", pizzas[i].nome);
        scanf("%d", &pizzas[i].pontuacao);
    }

    for(int i = 0; i < quantidade; i++) {
        if(pizzas[i].pontuacao > maior.pontuacao) {
            maior.pontuacao = pizzas[i].pontuacao;
            strcpy(maior.nome, pizzas[i].nome);
        } else if(pizzas[i].pontuacao == maior.pontuacao){
            strcpy(maior.nome, pizzas[i].nome);
        }
    }
    printf("%s\n", maior.nome);
}

