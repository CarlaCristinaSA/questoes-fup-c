 #include <stdio.h> 
 
 int floorN(float num) {
    int numero = (int)num;
    float frac = num - numero;
    return (num - frac); 
 }

 int ceilN(float num) {
    int numInt = (int)num;
     return (numInt + 1);
 }

 int roundN(float num) {
    int numero = (int)num;
    float frac = num - numero;
    if(frac < 0.5) {
        return floorN(num);
    }
    else {
        return ceilN(num);
    }
 }

 int main() {
    char caractere;
    float numero = 0;

    scanf("%c\n%f", &caractere, &numero);

    if(caractere == 'c') {
        printf("%d\n", ceilN(numero));
    } else if (caractere == 'f') {
        printf("%d\n", floorN(numero));
    }
    else {
        printf("%d\n", roundN(numero));
    }
 }



 