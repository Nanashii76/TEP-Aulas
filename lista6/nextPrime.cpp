#include <iostream>

using namespace std;


bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}




int main(){

    int x, a;
    cin >> x;

    if (isPrime(x) == true) cout << x << "\n";
    else {

        a = x+1;
        while (isPrime(a) != true) {
            a++;
        }

        cout << a << "\n";
    }
    




}