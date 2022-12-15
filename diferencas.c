#include<stdio.h>

float min(float vetor[], int tamanho);
float max(float vetor[], int tamanho);

int main(){

    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    float lista[n];

    for (int i = 0; i < n; i++){
        printf("Digite um valor para posicao %d do vetor ", i+1);
        scanf("%f", &lista[i]);
    }
    float novLista[n-1];
    for (int i = 0; i<n-1;i++){
        novLista[i] = lista[i+1]-lista[i];
    }

    for (int i = 0; i < n-1; i++){
        printf("%g ", novLista[i]);

    }

    printf("%g %g", min(novLista, n-1), max(novLista, n-1));


    return 0;
}
//retorna o menor valor do vetor
    float min(float vetor[], int tamanho){
        float d = vetor[0];
        for (int i=1; i<tamanho;i++){
            if(vetor[i]<d){
                d = vetor[i];
            }
        }
        return d;
        
    }
    //retorna o menor valor do vetor
    float max(float vetor[], int tamanho){
        float d = vetor[0];
        for (int i=1; i<tamanho;i++){
            if(vetor[i]>d){
                d = vetor[i];
            }
        }
        return d;
        
    }



