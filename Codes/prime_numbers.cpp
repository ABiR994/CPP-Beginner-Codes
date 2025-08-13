#include <iostream>
using namespace std;

int main() {
    int num, flag = 1;
    cin >> num;
    if(num >= 2) {
        for(int i = 2; i <= (num / 2); i++) {
            if(num % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    else {
        cout << num << " is not a Prime Number." << endl;
    }

    if(flag == 1) {
        cout << num << " is a Prime Number." << endl;
    }
    else {
        cout << num << " is not a Prime Number." << endl;
    }
    return 0;
}


/*
#include <iostream>
using namespace std;
int main() {
    int num, i;
    cout << "Enter your number: ";
    cin >> num;
    if(num >= 2) {
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                cout << num << " is not a prime number." << endl;
                break;
            }
        }
        if(i == num) {
            cout << num << " is a prime number." << endl;
        }
    }else{
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main() {
	int num;
	bool isPrime = true;
	cout << "Enter the number: ";
	cin >> num;

	if(num <= 1) {
        isPrime = false;
	}
	else {
        for(int i = 2; i < num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
	}

	if(isPrime == false) {
        cout << endl << num << " is not a Prime Number.\n";
	}
	else if(isPrime == true){
        cout << endl << num << " is a Prime Number\n";
	}
	return 0;
}

*/
