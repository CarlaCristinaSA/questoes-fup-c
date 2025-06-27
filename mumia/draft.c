#include <stdio.h>

char* classsificacao(int idade) {
    if(idade < 12) {
        return "crianca";
    }
    else if (idade >= 12 && idade < 18) {
        return "jovem";
    }
    else if (idade >= 18 && idade < 65) {
        return "adulto";
    } else if (idade >= 65 && idade < 100) {
        return "idoso";
    } else {
        return "mumia";
    }
}


int main() {
    char nome[50];
    int age;

    scanf(" %[^\n]\n%d", nome, &age);
    printf("%s eh %s\n", nome, classsificacao(age));
}


