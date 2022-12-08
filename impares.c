#include <stdio.h>
int main(){
    int menor, maior;
    printf("Digite dos numenos sendo que o de menor valor primeiro: \n");
    scanf("%d %d", &menor, &maior);

    
    
    void imparess (menor, maior){
        for (int i = menor; i <= maior; i++){
            if(i%2 != 0){
            printf("%d,  ", i);
            }  
        }
 
    }
    if(menor >= maior){
        printf("Ordem dos numeros digitados esta errado!!");
    }
    else{
        imparess(menor, maior);
    }
    return 0;
}