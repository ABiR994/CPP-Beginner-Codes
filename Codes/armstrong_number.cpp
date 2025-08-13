#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, rem, sum = 0, length = 0;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = num; i != 0; i /= 10) {
        length++;
    }

    int n = num;

    do{
        rem = n % 10;
        sum = sum + pow(rem, length);
        n = n / 10;
    }
    while(n != 0);

    cout << "\nThe number is " << num << endl;

    if(num == sum) {
        cout << endl << num << " is an Armstrong Number." << endl;
    }else{
        cout << endl << num << " is not an Armstrong Number." << endl;
    }

    return 0;
}
