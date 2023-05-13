#include <stdio.h>

int main(){

  
    int n, somaT = 0,  somaA = 0;
    scanf("%d", &n);
    char vet[n+1], somaPrim;

    for (int i = 0; i <= n; ++i) {
        scanf("%c", &vet[i]);
        
        if ( vet[i] == 'T') {
            somaT++;
        } else if (vet[i] == 'A') {
            somaA++;
        }

        if ( n % 2 == 0) {
            if (somaT == n/2 && somaA < n/2) {
                somaPrim = 'T';
            }
            else if (somaA == n/2 && somaT < n/2){
                somaPrim = 'A';
            }
        }

    }


    if ( somaA > somaT) printf("A\n");
    else if (somaT > somaA ) printf("T\n");
    else if ( somaT == somaA) printf("%c\n",somaPrim);

}