#include <stdio.h>

int main(){

    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    a *= b;
    c *= d;
    a -= c;
    printf("DIFERENCA = %d\n",a);


}