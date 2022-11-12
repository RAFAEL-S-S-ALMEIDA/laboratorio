#include <stdio.h>

int main(){
    int n, i, j, A, a = 1, p = 0;
    //n recebe o tamanho da sequencia de fibonacci
    scanf("%d", &n);

    for( i = 1, j = 0; i <= n; i++){
        printf("%d, ", j);
        
        if(i > 2){
            A = a;
            a = j;
            j = A + p;
            p = j;
        }
        else{
            j = 1;
            p = j;
        }
    }
    printf("%s", ". . .");
return 0;
}