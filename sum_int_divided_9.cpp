#include <iostream>
using namespace std;

int main() {
    int num = 100, sum = 0;
    do{
        if(num % 9 == 0) {
            sum += num;
        }
        num++;
    }
    while(num >= 100 && num <= 200);
    cout << "The sum of all integers between 100 and 200 that are divisible by 9 is: " << sum << endl;
    return 0;
}