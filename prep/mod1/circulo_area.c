#include <stdio.h>

#define n 3.14159

int main(){

    double raio;
    scanf("%lf", &raio);
    raio *= raio;
    raio *= n;
    printf("A=%.4lf\n",raio);




}