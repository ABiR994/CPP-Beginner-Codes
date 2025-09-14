#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int getDiagonalSum(int arr[4][4], int n) {
    int DigSum = 0;
    for(int i = 0; i < n; i++) {
        DigSum += arr[i][i];
        if(i != n - i - 1) {
            DigSum += arr[i][n - i - 1];
        }
    }
    return DigSum;
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int size = sizeof(arr) / sizeof(arr[0][0]);
    int n = sqrt(size);
    cout << "Sum of Diagonal Elements: " << getDiagonalSum(arr, n) << endl;
    return 0;
}