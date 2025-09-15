#include <iostream>
using namespace std;


int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int target;
    int r = 0, c = 0;
    bool found = false;

    cout << "Enter the element to search: ";
    cin >> target;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == target) {
                r = i;
                c = j;
                found = true;
                break;
            }
        }
    }

    if(found) {
        cout << "Element found at position: (" << r << ", " << c << ")" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}