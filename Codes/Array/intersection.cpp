#include <iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2) {
    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(arr1[i] != arr2[j]) {
                continue;
            }
            else {
                cout << arr1[i] << " ";
            }
        }
    }
}

int main() {
    int arr1[] = {1, 4, 3, 2, 5, 7, 6};
    int arr2[] = {9, 2, 1, 3, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    intersection(arr1, size1, arr2, size2);
    cout << endl;
    return 0;
}
