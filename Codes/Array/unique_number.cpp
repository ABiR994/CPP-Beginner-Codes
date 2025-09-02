#include <iostream>
using namespace std;

void unique(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int unq = 0;
    for(int i = 0; i < size; i++) {
        unq ^= arr[i];
    }
    cout << unq << endl;

}

int main() {
    int inp;
    cin >> inp;
    int size;
    for(int i = 1; i <= inp; i++) {
        cin >> size;
        //int size = 2 * n + 1;
        int arr[size];
        unique(arr, size);
    }
    cout << endl;
    return 0;
}