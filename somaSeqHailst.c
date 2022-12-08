#include <stdio.h>

int main(){

    int numero;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &numero);

    int x = numero;
    while(numero != 1 ){
        if(numero%2 == 0){
            numero = numero/2;
            x += numero;
        }
        else{
            numero = (3*numero)+1;
            x += numero;
        }
    }
    printf("%d", x);

    return 0;
}
