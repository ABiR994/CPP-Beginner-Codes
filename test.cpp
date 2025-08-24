#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main() {
    char s1[] = "Hello, ";
    char s2[] = "World!";
    cout << strlen(s1) << endl;
    cout << strlen(s2) << endl;
    char s3[] = "Hello, ";
    strcat(s3, s2);
    cout << s3 << endl;
    cout << strcmp(s1, s2) << endl;
    cout << strcmp(s2, s1) << endl;
    cout << strcmp(s1, s1) << endl;
    cout << strcmp(s2, s3) << endl;
    strcpy(s3, s1);
    cout << s3 << endl;
    strncat(s3, s1, 3);
    cout << s3 << endl;
    cout << strncmp(s1, s2, 3) << endl;
    cout << strncmp(s2, s1, 3) << endl;
    cout << strncmp(s1, s1, 3) << endl;
    cout << strncmp(s2, s3, 3) << endl;
    strncpy(s3, s1, 3);
    cout << s3 << endl;
    cout << strchr(s1, 'H') << endl;
    cout << strchr(s1, 'o') << endl;
    cout << strchr(s1, 'l') << endl;
    char a[] = "Hello, World!";
    char b[] = "World";   cout << strstr(a, b) << endl;
    return 0;
}