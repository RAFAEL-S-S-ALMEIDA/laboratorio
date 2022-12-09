#include <stdio.h>

int main(){

    int numero;
    printf("digite um numero inteiro positivo:\n");
    scanf("%d",&numero);

    int primo (int x) {
        int teste = 0, i;
        if (x == 1){
            return 0;
        }   
        else{
            for (i = 2; i<=x; i = 1+i ){
                if(x%i == 0){
                    teste = teste + 1;
                }
            }
        }
        if(teste == 1){
            return 1;
        }
        return 0;
    }
    int feliz (int b){
        int resto = b, soma = 0, d=0, maior=0;
        while(b!=0.0){
            d = d +1;

            
            while(b >= 1){
                resto = b%10;
                b = b / 10;
                soma = (resto * resto) + soma;
            }
            b = soma;
            if(soma == 1){

                return 1;
            }
            soma = 0;
            if(d==9){
                return 0;
            }
        }
    }
    if(numero == 0){
        printf("nenhum foi encontrado\n");
    }
    else{
        int i, maior = 0;
        for(i=1; 0<numero;numero-=i){
            if(primo(numero)){
                if(feliz(numero)){
                        maior = numero;
                        break;
                }
                
            }

        }
        if(maior==0){
            printf("%d***\n", maior);
        }
        else{
            printf("%d\n", maior);
        }
    }
    return 0;
}