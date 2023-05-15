#include <stdio.h>
#include <string.h>


    /**
     * 
     * Comparar a diferença entre caracteres e quantidade de @s
     * se a diferença de caracteres for maior que a quantiade de @s, retornar No
     * Assim como se a quantidade @s for maior que a diferençade caracteres
     * 
     * exluindo esses dois casos, retornar Yes
     * 
     * A pergunta é: como faço isso em C???
     * 
     * 
    */


int main(){

    char string1[1000+1];
    char string2[1000+1];

    int a = 0, b = 0, c = 0, soma = 0;

    scanf("%s", &string1);
    scanf("%s", &string2);

    /*while (c < strlen(string1)){

        if ( string1[a] != string2[b]) {
            a++;
            c = a;
        } else if (string1[a] == string2[b]){
            b++;
            a = c+1;
            soma++;
        }

        if ( a == strlen(string1)) c = strlen(string1) + 1;

    }

    printf("%d\n", strlen(string1) - soma);
    */

   for ( int i = 0; i < strlen(string1); ++i) {

        if (string2[a] == string1[i]){
            soma++;
            a++;
            i = 0;
        } else if ( i == strlen(string1) && a < strlen(string1)) {
            a++;
            i = 0;
        }
   }

    printf("%d\n",soma);
    printf("%d\n",strlen(string1));

}