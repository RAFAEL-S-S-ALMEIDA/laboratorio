#include <stdio.h>

int main(){
    float peso, altura;
    printf("qual é o seu peso em KG? ");//mensagem para usuario
    scanf("%f", &peso);
    printf("qual é sua altura em metros? ");//mensagem para usuario
    scanf("%f", &altura);
    float imc = peso/(altura*altura);
    if (imc < 16){
        printf("%.2f (perigo de vida)", imc);
    }
    if (imc >= 16 && imc < 17){
        printf("%.2f (muito abaixo do peso)", imc);
    }
    if (imc >=17 && imc < 18.5){
        printf("%.2f (abaixo do peso))", imc);
    }
    if (imc >= 18.5 && imc < 25){
        printf("%.2f (peso normal)", imc);
    }
    if (imc >= 25 && imc < 30){
        printf("%.2f (acima do peso)", imc);
    }
    if (imc >= 30 && imc < 35){
        printf("%.2f (obesidade grau I)", imc);
    }
    if (imc >= 35 && imc < 40){
        printf("%.2f (obesidade grau II)", imc);
    }
    if (imc >= 40){
        printf("%.2f (obesidade grau III)", imc);
    }
return 0;    
}