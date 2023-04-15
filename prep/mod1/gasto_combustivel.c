#include <stdio.h>

#define liters 12

int main(){

    double time, speed, distance;
    scanf("%lf %lf", &time, &speed);
    distance = time*speed;
    distance /= liters;
    printf("%.3lf\n", distance);



}