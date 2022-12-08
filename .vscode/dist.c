#include <stdio.h>
#include <math.h>
int main(){
float xA, yA, xB, yB;

printf("Digite as coordenadas de xA, yA:\n");
scanf("%f %f", &xA, &yA);
printf("Digite as coordenadas de xB, yB:\n");
scanf("%f %f", &xB, &yB);

float euclid (float xA, float yA, float xB, float yB){
    return sqrt(((xA - xB)*(xA - xB)) + ((yA - yB)*(yA - yB)));
}
float c = euclid(xA, yA, xB, yB);
printf("%g", c);
    return 0;
}