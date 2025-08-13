#include <iostream>
using namespace std;

int main() {
    int num, n = 0, i = 2, sum = 0;
	cout << "Enter the number of terms : ";
	cin >> num;
    cout << endl << "The even numbers are: " << endl;
	do{
		cout << i << endl;
		sum += i;
		i += 2;
        n++;
	}
	while(n < num);
	cout << endl << "The sum of even numbers up to " << num << " terms is: " << sum << endl;
    return 0;
}
