#include <stdio.h>

    /**
     * O que há de errado??
     * 
     * 
    */



// Função potencia 
int pot(int x, int y) {

    for (int i = 1; i < y; ++i) x*=x;

    return x;
}


int main(){

    int x, maior;
    int p = 2;
    scanf("%d", &x);

    
    // Pegar todos os valores menores que X, elevá-los a potências maiores ou iguais a 2 e comparar
    // se o valor for menor ou igual a x, então ele testa o próximo caso, se for maior, então o valor anterior é a potência correspondente
    for ( int i = 2; i <= x; ++i){
        while (pot(i,p) <= x) {
            maior = pot(i,p);
            p++;
        }
        p = 2;
        //if (pot(i+1,p) > maior && pot(i+1,p) > x) break; -> condião de parada

    }

    if (maior > x) {
        printf("1\n");
    }  else {
        printf("%d\n", maior);
    }
    
}
