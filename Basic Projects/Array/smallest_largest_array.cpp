#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int marks[size];
    //int size = sizeof(marks) / sizeof(marks[0]);
    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }
    cout << endl;

    int smallest = INT_MAX;
    int small_index = 0;
    for(int i = 0; i < size; i++) {
        if(marks[i] < smallest) {
            smallest = marks[i];
            small_index = i;
        }
    }
    cout << "Smallest: " << smallest << "\nIndex: " << small_index << endl;

    int largest = INT_MIN;
    int large_index = 0;
    for(int i = 0; i < size; i++) {
        if(marks[i] > largest) {
            largest = marks[i];
            large_index = i;
        }
    }
    cout << "Largest: " << largest << "\nIndex: " << large_index << endl;
    return 0;
}
