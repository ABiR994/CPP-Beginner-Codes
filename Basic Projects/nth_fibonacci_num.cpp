#include <iostream>
using namespace std;

void fibonacci(int num) {
    int a = 0, b = 1, f = 0;

    if (num == 1) {
        cout << a << endl;
        return;
    }

    cout << a << " " << b << " ";
    for(int i = 1; i <= num - 2; i++) {
        f = a + b;
        a = b;
        b = f;
        cout << f << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> num;
    if (num <= 0) {
        cout << "\nPlease enter a positive number." << endl;
    }
    else {
        cout << "\nThe Fibonacci Series upto " << num << " terms: \n";
        fibonacci(num);
    }

    return 0;
}
