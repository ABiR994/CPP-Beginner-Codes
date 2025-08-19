#include <iostream>
using namespace std;

int main() {
    int bin, dec = 0;
    cin >> bin;
    int i = 0;
    while(bin != 0) {
        int rem = bin % 10;
        dec += rem << i;
        bin /= 10;
        i++;
    }
    cout << dec << endl;
    return 0;
}