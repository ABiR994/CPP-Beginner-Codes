#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd, lcm;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "\nEnter the second number: ";
    cin >> num2;

    int n1 = num1, n2 = num2;
    while(n2 != 0) {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1 * num2) / gcd;
    cout << "\nGCD of " << num1 << " and " << num2 << " is " << gcd;
    cout << "\nLCM of " << num1 << " and " << num2 << " is " << lcm;
    return 0;
}