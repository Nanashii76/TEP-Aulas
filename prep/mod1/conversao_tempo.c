#include <stdio.h>

int main(){

    int n, hour, minutes, seconds;
    scanf("%d", &n);

    hour = n/3600;
    n -= (hour*3600);
    minutes = n/60;
    n -= (minutes*60);
    seconds = n;
    printf("%d:%d:%d\n", hour,minutes,seconds);


}