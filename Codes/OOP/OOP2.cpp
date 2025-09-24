#include <iostream>
using namespace std;

struct Book {
    int ISBN;
    string Title;
    float Price;
};

int main() {
    static Book B1;
    Book *ptrB1 = &B1;
    *ptrB1 = {12345, "C Programming", 29.99};

    cout << "ISBN: " << B1.ISBN << " Title: " << B1.Title << " Price: " << B1.Price << endl;

    cout << "ISBN: " << ptrB1 -> ISBN << " Title: " << ptrB1 -> Title << " Price: " << ptrB1 -> Price << endl;

    static Book B2 = {67890, "Java Programming", 39.99};

    cout << "ISBN: " << B2.ISBN << " Title: " << B2.Title << " Price: " << B2.Price << endl;

    Book *B3 = new Book;
    *B3 = {11223, "Python Programming", 49.99};

    cout << "ISBN: " << B3 -> ISBN << " Title: " << B3 -> Title << " Price: " << B3 -> Price << endl;

    delete B3;

    return 0;
}