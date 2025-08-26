#include <iostream>
using namespace std;

void pow_of_two(int n) {
    int set = 0;
    int num = n;
    if(num == 1) {
        cout << n << " is a power of 2." << endl;
    }
    else if(num > 1) {
        while(num != 0) {
            int temp = num % 2;
            if(temp == 1) {
                set++;
            }
            num = num / 2;
        }
        if(set == 1) {
            cout << n << " is a power of 2." << endl;
        }else{
            cout << n << " is not a power of 2." << endl;
        }
    }
    else {
        cout << n << " is not a power of 2." << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    pow_of_two(n);
    return 0;
}