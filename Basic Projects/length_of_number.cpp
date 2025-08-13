#include <iostream>
using namespace std;

int main() {
    int num, length = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = num; i != 0; i /= 10) {
        length++;
    }
    cout << "The number is " << num << endl;
    cout << "The length of the number is " << length << endl;
    return 0;
}