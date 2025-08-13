#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    do{
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    while(num != 0);
    cout << "The sum of the digits of the number is " << sum << endl;
    return 0;
}