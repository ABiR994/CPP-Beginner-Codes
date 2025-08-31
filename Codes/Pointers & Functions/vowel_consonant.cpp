#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;
    int vowel = 0, consonant = 0;
    while(*ptr != '\0') {
        *ptr = tolower(*ptr);
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            vowel++;
        }
        else if(isalpha(*ptr)) {
            consonant++;
        }
        ptr++;
    }
    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    return 0;
}
