#include <iostream>
using namespace std;

int main() {
    int num, reversed_num;
    cout << "Enter the number: ";
    cin >> num;
    reversed_num = 0;
    for(int i = num; i != 0; i /= 10) {
        reversed_num = reversed_num * 10 + i % 10;
    }
    cout << "Original number: " << num << endl;
    cout << "Reversed number: " << reversed_num << endl;
    return 0;
}