#include <stdio.h>

int main(){
    int p, s;

    //mensagem para usuario
    scanf("%d %d", &p, &s);
    printf("%d %s %d = %d,\n%d %s %d = %d,\n",p,"+",s,p+s,p,"-",s,p-s);
    printf("%d %s %d = %d,\n%d %s %d = %d,\n%d %s %d = %d,",p,"*",s,p*s,p,"/",s,p/s,p,"%",s,p%s);
return 0;
}