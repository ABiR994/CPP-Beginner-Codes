#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int bin, dec = 0;
    //int  pow = 1;
    int pow = 0;
    cout << "Enter the binary number: ";
    cin >> bin;
    while(bin > 0) {
        int rem = bin % 10;
        bin /= 10;
    //     dec += rem * pow;
        dec += rem << pow;
    //     pow *= 2;
        pow++;
    }
    cout << "\nDecimal Value: " << dec << endl;
    return 0;
}

