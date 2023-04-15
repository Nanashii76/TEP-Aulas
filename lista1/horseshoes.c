#include <stdio.h>

int main (){

    int a[5];
    int test, soma = 0;
    a[0] = test;
    scanf("%d", &test);
    for ( int i = 1; i<4; ++i) scanf("%d", &a[i]);
    for ( int j = 1; j<4; ++j) {
        if (a[j] == test || a[j] == a[0]) {
            soma++;
            test = a[j];
        } else test = a[j];
    }
    
    printf("%d\n", soma);


}