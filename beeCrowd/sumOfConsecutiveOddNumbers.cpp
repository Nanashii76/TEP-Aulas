#include <iostream>

using namespace std;

int main (){

    int x,y;
    int soma = 0;

    cin >> x >> y;

    if (x >= y) {
        y++;
        while ( y < x ) {
            if (y % 2 != 0) soma += y;
            y++;
        }

    } else {
        x++;
        while ( x < y ) {
            if (x % 2 != 0) soma += x;
            x++;
        }
    }

   cout << soma << "\n";

   return 0;

}