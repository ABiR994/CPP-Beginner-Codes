#include <iostream>
using namespace std;

int main() {
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;
    cout << "Enter the decimal number: ";
    cin >> numberToConvert;
    cout << "\nEnter the base: ";
    cin >> base;
    while(numberToConvert != 0) {
        convertedNumber[index] = numberToConvert % base;
        index++;
        numberToConvert /= base;
    }
    cout<<"\nConverted number = ";
    for(index = index - 1; index >= 0; index--) {
        nextDigit = convertedNumber[index];
        cout<<baseDigits[nextDigit];
    }
    cout << endl;
    return 0;
}
