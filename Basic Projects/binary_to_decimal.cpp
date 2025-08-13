#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int bin, dec = 0, pow = 1;
    cout << "Enter the binary number: ";
    cin >> bin;
    while(bin > 0) {
        int rem = bin % 10;
        dec += rem * pow;
        bin /= 10;
        pow *= 2;
    }
    cout << "\nDecimal Value: " << dec << endl;
    return 0;
}

