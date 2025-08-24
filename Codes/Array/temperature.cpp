#include <iostream>
#include <climits>
using namespace std;
int main() {
    int temp[8];
    int freezing = 0, cold = 0, mild = 0, hot = 0;
    for(int i = 0; i < 8; i++) {
        cout << "Enter temperature " << i+1 << ": ";
        cin >> temp[i];
        while(temp[i] < -25 || temp[i] > 45) {
            cout << "Invalid temp. Enter -20 to 45: ";
            cin >> temp[i];
        }
    }
    cout << "\nTemperature Categories:\n";
    for(int i = 0; i < 8; i++) {
        cout << "Reading " << i+1 << "(" << temp[i] << "\u00B0C) - ";
        if(temp[i] < 0) {
            cout << "Freezing\n";
            freezing++;
        }
        else if(temp[i] >= 0 && temp[i] <= 15) {
            cout << "Cold\n";
            cold++;
        }
        else if(temp[i] >= 16 && temp[i] <= 25) {
            cout << "Mild\n";
            mild++;
        }
        else if(temp[i] > 25) {
            cout << "Hot\n";
            hot++;
        }
    }
    cout << "\nSummary:\n";
    cout << "Freezing: " << freezing << "\n";
    cout << "Cold: " << cold << "\n";
    cout << "Mild: " << mild << "\n";
    cout << "Hot: " << hot << "\n";
    int hottest = INT_MIN, h_index = 0, coldest = INT_MAX, c_index = 0;
    for(int i = 0; i < 8; i++) {
        if(temp[i] > hottest) {
            hottest = temp[i];
            h_index = i + 1;
        }
        if(temp[i] < coldest) {
            coldest = temp[i];
            c_index = i + 1;
        }
    }
    cout << "Hottest: Reading " << h_index << " at " << hottest << "\u00B0C\n";
    cout << "Coldest: Reading " << c_index << " at " << coldest << "\u00B0C\n";
    return 0;
}