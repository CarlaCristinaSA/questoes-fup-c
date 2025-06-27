#include <stdio.h>

void jokepo(char jog1, char jog2) {
    if((jog1 == 'R' && jog2 == 'S' )|| (jog1 == 'S' && jog2 == 'P') || (jog1 == 'P' && jog2 == 'R')) {
        printf("jog1\n");
    } else if (jog1 == jog2) {
        printf("empate\n");
    } else {
        printf("jog2\n");
    }
}

int main() {
    char jogadorUm, jogadorDois;
    scanf(" %c\n %c", &jogadorUm, &jogadorDois);
    jokepo(jogadorUm, jogadorDois);
}

