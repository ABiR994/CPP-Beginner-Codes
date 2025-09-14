#include <iostream>
#include <climits>
using namespace std;

int getMaxRowSum(int arr[3][3]) {
    int maxRowSum = INT_MIN;
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int getMaxColSum(int arr[3][3]) {
    int maxColSum = INT_MIN;
    for(int j = 0; j < 3; j++) {
        int ColSum = 0;
        for(int i = 0; i < 3; i++) {
            ColSum += arr[i][j];
        }
        maxColSum = max(maxColSum, ColSum);
    }
    return maxColSum;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Maximum Row Sum: " << getMaxRowSum(arr) << endl;
    cout << "Maximum Column Sum: " << getMaxColSum(arr) << endl;
    return 0;
}