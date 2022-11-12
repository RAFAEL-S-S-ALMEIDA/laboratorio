#include <stdio.h>
#include <stdint.h>
#include <math.h>
#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fat(int m);

int main(){
    int n, i;
    
    double x, xx, p = 0.0, taylor = 0.0;
    //mensagem para usuario
    scanf("%d", &n);
    //mensagem para usuario
    scanf("%lf", &x);
    xx = M_PI * x;
    printf("xx= %lf\n", xx);
    for(i = 1; i <= n; ++i){
        p = ((pow(xx, (2*i)))/(fat(2*i)));
        taylor += p;
        printf("i= %d\n",i);
        printf("p = %lf\n",p);
        

    }
    printf("taylor = %lf\n",taylor);
    taylor = 1 - taylor;
    printf("respost = %.5lf", taylor);

return 0;
}


int fat(int m){
    int i, n =1;
    for (i = 1; i<=m; ++i){
        n *= i;
    } 
return n;
}
