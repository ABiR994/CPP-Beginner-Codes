#include <iostream>
using namespace std;

void fizzBuzzCalculator(int num[], int s) {
    int Fizz = 0, Buzz = 0, FizzBuzz = 0;
    for(int i = 0; i < s; i++) {
        if((num[i] % 3 == 0) && (num[i] % 5 != 0)) {
            Fizz++;
        }
        if((num[i] % 5 == 0) && (num[i] % 3 != 0)) {
            Buzz++;
        }
        if((num[i] % 3 == 0) && (num[i] % 5 == 0)) {
            FizzBuzz++;
        }
    }

    cout << "Fizz = " << Fizz << endl;
    cout << "Buzz = " << Buzz << endl;
    cout << "FizzBuzz = " << FizzBuzz << endl;
}

int main() {
    int arr[10] = {3, 5, 15, 7, 9, 20, 30, 8, 11, 45};
    fizzBuzzCalculator(arr, 10);
    return 0;
}