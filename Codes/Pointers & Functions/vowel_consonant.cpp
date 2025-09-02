#include <iostream>
#include <cctype>
using namespace std;

void vow_con(char *ptr, int *vowel, int *consonant) {
    while(*ptr != '\0') {
        char ch = tolower(*ptr);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowel)++;
        }
        else if(isalpha(ch)) {
            (*consonant)++;
        }
        ptr++;
    }
}

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;
    int vowel = 0, consonant = 0;
    vow_con(ptr, &vowel, &consonant);
    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    return 0;
}
