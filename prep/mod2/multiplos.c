#include <stdio.h>

int main(){

    unsigned int a,b;
    
    scanf("%u %u", &a,&b);

    if ( b > a && b % a == 0 ) printf("Sao Multiplos\n");
    else if ( a > b && a % b == 0)printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");


}