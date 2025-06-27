  
  #include <stdio.h>

int main() {
    int valorUm, valorDois, valorTres;
    scanf("%d\n%d\n%d\n", &valorUm, &valorDois, &valorTres);

    if(valorUm == valorDois && valorUm == valorTres && valorDois == valorTres) {
        printf("3\n");
    }

    else if(valorUm == valorDois || valorDois == valorTres || valorTres == valorUm) {
        printf("2\n");
    }

    else {
        printf("0\n");
    }
}

