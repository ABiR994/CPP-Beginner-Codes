#include <iostream>
using namespace std;

int main() {
    int num, rem, binary = 0, place = 1;

    cout << "Enter a Decimal number: ";
    cin >> num;
    int n = num;
    while (n > 0) {
        rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    cout << "\nBinary form of " << num << ": " << binary << endl;
    return 0;
}
