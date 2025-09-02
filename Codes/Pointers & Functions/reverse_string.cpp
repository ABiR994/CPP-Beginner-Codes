#include <iostream>
#include <cstring>
using namespace std;

void rev_str(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    cout << str << endl;
    char *ptr = str;
    rev_str(ptr);
    cout << "Reversed: " << str << endl;
    return 0;
}