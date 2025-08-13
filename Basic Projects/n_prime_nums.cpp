#include <iostream>
using namespace std;

void prime(int num) {
    if(num >= 2) {
        for(int i = 2; i < num; i++) {
            if(num % i == 0) {
                return;
            }
        }
        cout << num << endl;
    }
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "\nPrime numbers up to " << num << ":\n";
    for(int i = 1; i <= num; i++) {
        prime(i);
    }
    return 0;
}
