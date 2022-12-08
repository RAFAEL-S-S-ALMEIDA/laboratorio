#include <stdio.h>
#include <math.h>

int main(){
    float xA, yA, xB, yB, xC, yC;

    float  euclid ( float xA, float yA, float xB, float yB){
        return  sqrt (((xA - xB)*(xA - xB)) + ((yA - yB)*(yA - yB)));
    }
    

    
    printf("Digite as coordenadas de xA e yA\n");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas de xB e yB\n");
    scanf("%f %f", &xB, &yB);
    printf("As coordenadas de xC = %g e yC = %g.\n", xB, yA);
    xC = xB;
    yC = yA;
    float a = euclid(xB, yB, xC, yC);
    float b = euclid(xA, yA, xC, yC);
    printf(" %g ", ((a*b)/2));


    return 0;
}
