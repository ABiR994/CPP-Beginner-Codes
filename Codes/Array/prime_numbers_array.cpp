#include <iostream>
using namespace std;

int main() {
    int prime[50];
    prime[0] = 2;
    prime[1] = 3;
    int index = 2, i;
    for(int p = 5; p <= 50; p += 2) {
        for(i = 2; i < p; i++) {
            if(p % i == 0) {
                break;
            }
        }
        if(p == i){
            prime[index] = p;
            index++;
        }
    }
    for(int j = 0; j < index; j++) {
        cout << "Prime[" << j << "] = " << prime[j] << endl;
    }
    return 0;
}
