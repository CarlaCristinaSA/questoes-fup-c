#include <stdio.h>

struct Pos{
    int x, y;
};

void atualizar_cobra(struct Pos cobra[], int size, char direcao) {
    struct Pos anterior = cobra[0];
        if(direcao == 'L') {
            cobra[0].x--;
        } else if(direcao == 'R') {
            cobra[0].x++;
        } else if(direcao == 'U') {
            cobra[0].y--;
        } else if(direcao == 'D') {
            cobra[0].y++;
        }

    for(int i = 1; i < size; i++) {
        struct Pos aux = cobra[i];
        cobra[i] = anterior;
        anterior = aux;
    }
}

int main() {
    int quantidade;
    char letra;
    scanf("%d %c", &quantidade, &letra);
    struct Pos cobras[quantidade];

    for(int i = 0; i < quantidade; i++) {
        scanf("%d", &cobras[i].x);
        scanf("%d", &cobras[i].y);
    }

    atualizar_cobra(cobras, quantidade, letra);

    for(int i = 0; i < quantidade; i++) {
        printf("%d %d\n", cobras[i].x, cobras[i].y);
    }

}

