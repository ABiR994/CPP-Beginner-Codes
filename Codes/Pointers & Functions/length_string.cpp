#include <iostream>
using namespace std;

void strlen(char *ptr, int *length) {
    while(*ptr != '\0') {
        (*length)++;
        ptr++;
    }
}


int main() {
    char str[] = "Hello, World!";
    char *ptr = str;
    int length = 0;
    strlen(ptr, &length);
    cout << "Length: " << length << endl;
    return 0;
}