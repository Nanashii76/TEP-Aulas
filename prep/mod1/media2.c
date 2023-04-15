#include <stdio.h>

int main(){

    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    a*=2;
    b*=3;
    c*=5;
    a += b+c;
    a /= 10;
    printf("MEDIA = %.1lf\n", a);


}