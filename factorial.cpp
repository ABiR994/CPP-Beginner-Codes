#include<iostream>
using namespace std;
int main() {
    int num, factorial = 1;
    cout << "Enter the number: ";
    cin >> num;
    if(num > 0) {
        for(int n = num; n != 0; n--){
            factorial *= n;
        }
        cout << "\nThe factorial of " << num << " is " << factorial << endl;
    }else{
        cout << "\nFactorial is not defined for negative numbers." << endl;
    }
    return 0;
}
