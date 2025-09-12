#include <iostream>
using namespace std;

int* findMax(int *arr, int size) {
    int *maxAdd = arr;
    while(size > 0) {
        if(*arr > *maxAdd) {
            maxAdd = arr;
        }
        arr++;
        size--;
    }
    return maxAdd;
}

int main() {
    int arr[] = {10, -2, 33, 14, 45, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *maxAdd = findMax(arr, size);

    cout << "Max Value: " << *maxAdd << endl;
    cout << "Max Address: " << maxAdd << endl;

    return 0;
}
