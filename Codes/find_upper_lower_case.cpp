#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    }
    else if(ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    }
    else {
        cout << ch << " is not a letter." << endl;
    }
    return 0;
}


//!Alternative

/*
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int n = ch;
    if(n >= 65 && n <= 91) {
        cout << ch << " is an uppercase letter." << endl;
    }
    else if(n >= 97 && n <= 123) {
        cout << ch << " is a lowercase letter." << endl;
    }
    else {
        cout << ch << " is not a letter." << endl;
    }
    return 0;
}

*/