#include <iostream>
#include <climits>
using namespace std;


int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i == 0 || i % 2 == 0) {
                cout << arr[j][i] << " ";
            }
            else {
                cout << arr[3 - j][i] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}