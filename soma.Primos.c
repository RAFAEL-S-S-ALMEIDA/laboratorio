#include <stdio.h>

int main(){

    int numero;
    printf("Digite um numeros inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i<=numero; i++){
        if (numero % i == 0){
            
                printf("%d, ",i);
            
        
            }
        
    }


    return 0;
}