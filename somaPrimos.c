#include <stdio.h>

int main(){
int menor, maior;
printf("Digite um valor para a e um valor para b sendo que satisfaca a<b: ");
scanf("%d %d", &menor, &maior);
int primo (int x) {
    int i;
    int teste = 0;
    if (x == 1){
        return 0;
    }
    else{
        
        for (i = 2; i<=x; i= 1+i ){
            if(x%i == 0){
                teste = teste + 1;
            }
            }
        }
    if(teste == 1){
        return x;
    }
    return 0;
    }     
int somaPrimo(int x, int y){
    int b = 0;
    int i;
    for (x; x<=y; x=x+1){
        
        if (primo(x) != 0){
            printf("primo= %d\n", primo(x));
            b = b + x;
            printf("b= %d\n", b);
            }

        }
        return b;
    }
if(menor>=maior){
    printf("A ordem dos numeros digitados esta errada!!!\n");
}
else{
    printf("%d\n", somaPrimo(menor, maior));
}
    return 0;
}