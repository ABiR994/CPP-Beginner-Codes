#include <iostream>
using namespace std;

int factorial(int f) {
    int fact = 1;
    for(int i = f; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}

double nCr(int n, int r) {
    return ((factorial(n)) / (factorial(r) * factorial(n - r)));
}

int main() {
    int n,r;
    cout << "Enter the upper index: ";
    cin >> n;
    cout << "\nEnter the lower index: ";
    cin >> r;
    cout <<"\nThe Binomial Coefficient is " << nCr(n, r) << endl;
    return 0;
}
