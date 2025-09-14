#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int arr2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int sum[3][3];
    int size = sizeof(arr1) / sizeof(arr1[0][0]);
    int n = sqrt(size);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}