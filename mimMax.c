#include <stdio.h>
#define valor_max = 100

int main(){
    //criara o vetor para ser analisado
    int n, h;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d",&n);
    int lista[n];
    printf("Digite os numeros que serao adicionado na lista:\n");
    for (int i = 0; i<n; i++){
        scanf("%d", &h);
        lista[i]=h;

    }
    //retorna o menor valor do vetor
    int min(int vetor[], int tamanho){
        int i, d = vetor[0];
        for (i=1; i<tamanho;i++){
            if(vetor[i]<d){
                d = vetor[i];
            }
        }
        return d;
        
    }
    //retorna o menor valor do vetor
    int max(int vetor[], int tamanho){
        int i, d = vetor[0];
        for (i=1; i<tamanho;i++){
            if(vetor[i]>d){
                d = vetor[i];
            }
        }
        return d;
        
    }
    int i, maior = max(lista, n), menor = min(lista, n);

    for (int i=0; i<n; i++){
        if(lista[i] == maior) printf("%d> ",lista[i]);

        else if(lista[i] == menor) printf("%d< ",lista[i]);

        else printf("%d ",lista[i]);
    }

    
    return 0;

}