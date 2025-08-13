#include <iostream>
using namespace std;

int main() {
    int i = 15;
    //cout << "Enter the number of Fibonacci numbers you want: ";
    //cin >> i;
    int Fibonacci[i];
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;
    cout << Fibonacci[0] << " " << Fibonacci[1] << " ";
    for(int j = 2; j < i; j++) {
        Fibonacci[j] = Fibonacci[j - 2] + Fibonacci[j - 1];
        cout << Fibonacci[j] << " ";
    }
    return 0;
}
