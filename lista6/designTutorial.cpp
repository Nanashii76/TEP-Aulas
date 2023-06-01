#include <iostream>

using namespace std;

int main(){

    int n, x = 0, y = 0;
    cin >> n;
   

   // por que ele não aceitou x = n/2 e y = n/2 ??????
   if (n % 2 == 0) {
        x = 4;
        y = n-4;
        cout << x << " " << y << "\n";
   } else {
        x = 9;
        y = n-9;
        cout << x << " " << y << "\n";
   }

}

