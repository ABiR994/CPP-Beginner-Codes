#include <iostream>
#include <climits>
using namespace std;

void max_min(int *ptr, int size, int *max, int *min) {
    int i = 0;
    while(i < size) {
        if(*ptr > *max) {
            *max = *ptr;
        }
        if(*ptr < *min) {
            *min = *ptr;
        }
        ptr++;
        i++;
    }
}

int main() {
    int arr[] = {22, -5, 33, 0, 98, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int max = INT_MIN, min = INT_MAX;
    max_min(ptr, size, &max, &min);
    cout << "Largest: " << max << endl;
    cout << "Smallest: " << min << endl;
    return 0;
}