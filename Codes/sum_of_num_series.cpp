#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter the number of numbers in this series: ";
    cin >> num;
    for(int i = 1; i <= num; i += 1) {
        sum += i;
    }
    cout << "The sum of the series is " << sum << endl;
    return 0;
}