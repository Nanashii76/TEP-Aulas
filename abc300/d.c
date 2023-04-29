#include <stdio.h>
#include <math.h>

int isPrime(int a) {

    int b = 2, soma = 0;


    while ( b < a) {

        if (a % b == 0) soma++,b++;
        else b++;
    }

    if (soma >= 1) return 0;
    else return 1;
}

long long int primeTests(long long int n){

    int a = 2, b = 3, c = 5;
    int soma = 0, i = 0, j = 0, k = 0;

    while (soma < n){
        if (isPrime(a+i) == 1 && isPrime(b) == 1 && isPrime(c) == 1 ) {
            soma = (a+i)*(a+i) * b * (c*c);
            i++;
        } else i++;
        if (isPrime(a) == 1 && isPrime(b+j) == 1 && isPrime(c) == 1 ) {
            soma = (a*a) * (b+j) * (c*c);
            j++;
        } else j++;
        if (isPrime(a) == 1 && isPrime(b) == 1 && isPrime(c+k) == 1 ) {
            soma = (a*a) * b * ((c+k)*(c+k));
            k++;
        } else k++;
    }


    return (i+j+k)/2;

}


int main(){

    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", primeTests(n));
    
}