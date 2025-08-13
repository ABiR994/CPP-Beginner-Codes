#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int octal, decimal = 0, rem = 0;
    cout << "Enter the Octal number: ";
    cin >> octal;
    int i = 0, n = octal;
    while(n != 0) {
        rem = n % 10;
        decimal += rem * pow(8,i);
        n /= 10;
        i++;
    }
    cout << "\nThe decimal form of the octal number " << octal << " is " << decimal << endl;
    return 0;
}
