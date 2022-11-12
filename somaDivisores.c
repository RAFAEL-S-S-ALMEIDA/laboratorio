#include <stdio.h>

int main(){
    int n, i, soma = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        int r = (n%i == 0);
        if (r){
            soma += i;
        }
    }
    printf("%d\n",soma);


return 0;
}