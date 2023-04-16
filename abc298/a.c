#include <stdio.h>

int main(){

    int n, soma = 0;

    scanf("%d", &n);

    char str[n+1];

    for ( int i = 0; i<=n; ++i) {

        scanf("%c", &str[i]);
        if ( str[i] == 'x'){
            printf("No\n");  
            return 0;
        } 
        else if (str[i] == 'o') soma++;
    }

        if ( soma != 0 ) printf("Yes\n");
        else printf("No\n");


}