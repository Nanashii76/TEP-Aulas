#include <stdio.h>

int isPrime(int a) {

    int b = 2, soma = 0;

    while ( b < a) {

        if (a % b == 0) soma++,b++;
        else b++;
    }

    if (soma >= 1) return 0;
    else return 1;
}

int main(){


    unsigned long int n;
    int p, a = 0;
    unsigned long int soma = 0;
    scanf("%lu %d", &n, &p);
    int vet[p];

    for ( int i = 1; i <= p; ++i) {
        if (isPrime(i) == 1 && i <=p) vet[a] = i, a++;
    }

    for ( int i = 0; i < p; ++i) {
        int b = 1;
        while( vet[i] <= n ) {
            vet[i] = vet[i] * b;
            b++;
            soma++; 
        }
    }

    printf("%lu\n", soma+1);

    
}