#include <stdio.h>
float prod (float lista[], int n);
   //funçao que multiplica os numeros de uma lista

int main(){
 
    int n;
    printf("Digite a quantidade de numeros que deseja multiplicar: \n");
    scanf("%d", &n);
    //criando uma vetor
    float lista[n];
    float x;
    for (int i = 0; i<n; i++){
        printf("digite o %d  numero: ",  i+1);
        scanf("%f", &x);
        lista[i] = x;
    }
    //modelando a saida
    for(int i = 0; i<n; i++){
       if (i==0) printf("%g ",lista[i]);
       else printf("* %g ",lista[i]);
    } 
    printf("= %g", prod(lista, n));

    return 0;

}
float prod (float lista[], int n){
        float mult = 1.0;
        for (int i = 0; i<n; i++){
            mult = mult * lista[i];
        }
        return mult;
    }