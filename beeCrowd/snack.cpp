#include <iostream>
#include <iomanip>

using namespace std;


int main (){

    int x,y;
    double ans;

    cin >> x >> y;

    switch(x){
        case 1:
        ans = y*4;
        break;
        case 2:
        ans = y*4.50;
        break;
        case 3:
        ans = y*5;
        break;
        case 4:
        ans = y*2;
        break;
        case 5:
        ans = y*1.50;
        break;
        default: break;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << ans << "\n"; 

    return 0;
}