#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, f = 0;
    cout << "Enter the limit: ";
    cin >> n;
    cout << "\nThe Fibonacci series is: " << endl;
    cout << a << " " << b << " ";
    for(int i = 1; i <= n - 2; i++){
        f = a + b;
        cout << f << " ";
        a = b;
        b = f;
    }
    cout << endl;
    return 0;
}
