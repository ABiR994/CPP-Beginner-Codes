#include <iostream>
using namespace std;

void sort(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(*(arr + i) > *(arr + j)) {
                swap(*(arr + i), *(arr + j));
            }
        }
    }
}

int main() {
    int arr[] = {23, 3, 0, -45, 23, 43, 2, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    sort(ptr, size);
    for(int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}