#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello, World!";
    int size = sizeof(str) / sizeof(str[0]);
    int start = 0;
    int end = size - 1;
    for(int i = start; i < end; i++) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    for(int i = 0; i < size; i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}