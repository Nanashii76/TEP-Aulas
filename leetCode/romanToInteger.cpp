#include <iostream>
#include <string>
using namespace std;

int main(){

    string roman;
    int decimal = 0;
    cin >> roman;

    for ( int i = 0; i < roman.length(); ++i) {
        switch(roman[i]) {
            case 'I':
                if (roman[i+1] == 'V') {
                    decimal += 4;
                    ++i;
                } else if(roman[i+1] == 'X') {
                    decimal += 9;
                    ++i;
                } else decimal += 1;
                break;
            case 'V':
                if (roman[i+1] == 'L') {
                    decimal += 45;
                    ++i;
                } else if (roman[i+1] == 'C') {
                    decimal += 95;
                    ++i;
                } else if (roman[i+1] == 'D') {
                    decimal += 495;
                    ++i;
                } else if (roman[i+1] == 'M') {
                    decimal += 995;
                    ++i;
                } else decimal += 5;
                break;
            case 'X':
                if (roman[i+1] == 'L') {
                    decimal += 40;
                    ++i;
                } else if (roman[i+1] == 'C') {
                    decimal += 90;
                    ++i;
                } else if (roman[i+1] == 'D') {
                    decimal += 490;
                    ++i;  
                } else if (roman[i+1] == 'M') {
                    decimal += 990;
                    ++i;
                }
                else decimal += 10;
                break;
            case 'L':
                if(roman[i+1] == 'D') {
                    decimal += 450;
                    ++i;
                } else if (roman[i+1] == 'M') {
                    decimal += 950;
                    ++i;
                }
                else decimal += 50;
                break;
            case 'C':
                if(roman[i+1] == 'D') {
                    decimal += 400;
                    ++i;
                } 
                else if(roman[i+1] == 'M') {
                    decimal += 900;
                    ++i;
                } 
                else decimal += 100;
                break;
            case 'D':
                decimal += 500;
                break;
            case 'M':
                decimal += 1000;
                break;
        }
    }

    cout << decimal << "\n";

}