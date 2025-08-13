#include <iostream>
using namespace std;

int main() {
    int num, i;
    cout << "Enter the number: ";
    cin >> num;
    for(int n = 1; n <= num; n++) {
        i = 1;
        cout << endl << "Multiplication Table of " << n << ":"<< endl;
        do{
            cout << n << " x " << i << " = " << n * i << endl;
            i++;
        }
        while(i <= 10);
        cout << endl;
    }
    return 0;
}
