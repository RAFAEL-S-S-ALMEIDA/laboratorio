#include <stdio.h>

int main(){
    float t;
    int n;
    //mensagem para o usuario
    scanf("%d",&n);
    if(n > 1){
    t = (1.0+n)*(n/2.0);
    
    printf("%.0f",t);
    }

return 0;
}