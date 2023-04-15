#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned int a,b,c,maior1, maior2;
    scanf("%u %u %u",&a, &b, &c);
    maior1 = ((a+b)+abs(a-b))/2;
    maior2 = ((maior1+c)+abs(maior1-c))/2;
    //maior1 = ((maior1+maior2)+(maior1-maior2))/2;
    printf("%u eh o maior\n", maior2);


}