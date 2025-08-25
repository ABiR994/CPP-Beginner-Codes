#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target value to search: ";
    cin >> target;
    cout << "Index of target (" << target << "): " << linear_search(arr, size, target) << endl;
    return 0;
}