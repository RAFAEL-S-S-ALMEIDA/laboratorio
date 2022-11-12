#include <stdio.h>
#include <stdint.h>

int main(){
    int n;
    long t = 1;
    scanf("%d",&n);
    if(n>1){
        while(n != 1){
            t = t*n;
            --n;

        }
    }
    printf("%ld",t);

return 0;    
}