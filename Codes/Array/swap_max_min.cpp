#include <iostream>
using namespace std;

void max_min(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    int max_index = 0;
    int min_index = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }
    swap(arr[max_index], arr[min_index]);
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: \n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    max_min(arr, size);
    cout << "Array after swapping max and min: \n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
