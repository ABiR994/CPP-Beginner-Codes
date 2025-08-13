#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_of_subjects;
    float grade, total_grade = 0.0;
    string subject_name;
    cout << "------------ Grade Calculator ------------" << endl;
    cout << "This is a program to calculate your final grade based on the number of subjects and your grade in each subject." << endl;
    cout << "Please enter a grade between 0.0 and 4.0." << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Enter the number of subjects you have taken: ";
    cin >> num_of_subjects;
    cin.ignore();
    for(int i = 1; i <= num_of_subjects; i = i + 1) {
        cout << "Enter the name of the subject: ";
        getline(cin, subject_name);
        cout << "Enter your grade in " << subject_name << ": ";
        cin >> grade;
        cin.ignore();
        if(grade >= 0.0 && grade <= 4.0) {
            total_grade = total_grade + grade;
        }else{
            cout << "Invalid grade entered for " << subject_name << ". Please enter a grade between 0.0 and 4.0.";
            i--;
            cin.ignore();
        }
    }
    float average_grade = total_grade / num_of_subjects;
    cout << "\nYour average grade is: " << average_grade << endl;
    cout << "Thank you for using the grade calculator. Hope you have a good day!!" << endl;
    cout << "-------------------------------------------" << endl;
    return 0;
}
