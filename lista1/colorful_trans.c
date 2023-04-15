#include <stdio.h>

int main(void) {
//declaring 4 variables to receive int numbers
int a,b,c,d;
//distance between each point
int r1,r3;

scanf("%d %d %d %d", &a, &b, &c, &d);

r1 = a-b;
r3 = a-c;

// getting the distance in module
if ( r1 < 0 ) r1*(-1);
if (r3 < 0 ) r3*(-1);

if ( r1 <= d || r3 <= d) printf("Yes\n");
else printf("No\n");

    return 0;

}
