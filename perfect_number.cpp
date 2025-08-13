#include <iostream>
using namespace std;

int main() {
    int num, i = 1, sum = 0;
    cout << "Enter your number: ";
    cin >> num;
    do {
        if(num % i == 0) {
            sum += i;
        }
        i++;
    }
    while(i < num);
    if(sum == num) {
        cout << num << " is a perfect number." << endl;
    }
    else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}