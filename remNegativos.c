#include<stdio.h>


int nunPosivo(int vetor[], int n);

int main(){

    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    int lista[n];

    for (int i = 0; i < n; i++){
        printf("Digite um numero para posicao %d do vetor: ",i+1);
        scanf("%d", &lista[i]);
    }
    for (int i = 0; i < n; i++){

    }
    int tamanho = nunPosivo(lista, n);

    if (tamanho>0){
        int novaLista[tamanho], h = 0;
        for (int i = 0; i< n; i++){
            if(lista[i]>=0){
                novaLista[h]= lista[i];
                h +=1;
            }
        }
        for (int i = 0; i< tamanho; i++){
            if (i==0) printf("%d", novaLista[i]);
            else printf(", %d", novaLista[i]);
        }
    }
        else printf("vazio");


    return 0;

}
//conta o numero de elementos >= 0 do vetor
int nunPosivo(int vetor[], int n){
    int t = 0;
    for (int i = 0; i<n; i++){
        if(vetor[i]>=0) t+=1;
    }
    return t;
}
