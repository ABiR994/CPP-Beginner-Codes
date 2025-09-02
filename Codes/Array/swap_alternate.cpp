#include <iostream>
using namespace std;


int main() {
    int arr[] = {2, 5, 6, 12, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i + 1 < size; i+=2) {
        swap(arr[i], arr[i+1]);
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}