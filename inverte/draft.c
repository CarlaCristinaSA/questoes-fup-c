#include <stdio.h>

int main() {
    char letra;
    scanf("%c", &letra);

    if(letra >= 'a' && letra <= 'z') {
        printf("%c\n", letra-32);
    } 
    else if(letra >= 'A' && letra <= 'Z') {
        printf("%c\n", letra+32);
    } else {
         printf("%c\n", letra);
    }
}

