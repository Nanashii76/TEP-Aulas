#include <stdio.h>

int main(){

    int x, y;
    double total;
    scanf("%d %d", &x, &y);

    switch(x){

        case 1:
        total = 4*y;
        printf("TOTAL: R$ %.2lf\n", total);
        break;
        case 2:
        total = 4.5*y;
        printf("TOTAL: R$ %.2lf\n", total);
        break;
        case 3:
        total = 5*y;
        printf("TOTAL: R$ %.2lf\n", total);
        break;
        case 4:
        total = 2*y;
        printf("TOTAL: R$ %.2lf\n", total);
        break;
        case 5:
        total = 1.5*y;
        printf("TOTAL: R$ %.2lf\n", total);
        break;
    }


}