#include <iostream>
using namespace std;

int main() {
    int num1, num2, hcf;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int n1 = num1, n2 = num2;
    do{
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    while(n2 != 0);
    hcf = n1;
    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf << endl;
    return 0;
}