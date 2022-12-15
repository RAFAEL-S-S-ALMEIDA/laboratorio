#include<stdio.h>
#include<math.h>

float media (float lista[], int n);
float desPadrao (float lista[], int n);

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite um numero para posicao %d do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
    for(int i = 0; i < n; i++){
    }
    printf("media %g, ",  media(vetor, n) );
    printf("desvio %g", desPadrao(vetor, n));

return 0;

}


float media (float listaa[], int n){
    float t = 0;
    for (int i = 0; i<n; i++){
        t += listaa[i];
    }
    return t/n;
}
float desPadrao (float listaa[], int n){
    float t = 0.0;
    for (int i = 0; i<n; i++){
        t += listaa[i] ;
        }    
    t=t/n;
    for (int i = 0; i<n; i++){
        if (listaa[i] < 0) listaa[i] = listaa[i]+t;
        else listaa[i] = listaa[i]-t;
        }
    t = 0;
    for (int i = 0; i<n; i++){
        t += listaa[i]*listaa[i];
    
    }
    return pow((t/n),0.5);

    }

