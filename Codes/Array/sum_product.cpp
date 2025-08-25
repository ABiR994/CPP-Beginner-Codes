#include <iostream>
using namespace std;

void sum_prod(int arr[], int size, int &sum, int &prod) {
    sum = 0;
    prod = 1;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        prod *= arr[i];
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum, prod;
    sum_prod(arr, size, sum, prod);
    cout << "Sum: " << sum << ", Product: " << prod << endl;
}
