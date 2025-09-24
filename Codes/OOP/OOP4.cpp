#include <iostream>
#include <cstring>
using namespace std;

class Teacher {
    private:
        int teacherID;
        string name;
        double basicMonthlySalary;
    public:
        Teacher() {
            teacherID = 0;
            name = "";
            basicMonthlySalary = 0.0;
        }

        Teacher(int ID, string n, double b) {
            teacherID = ID;
            name = n;
            basicMonthlySalary = b;
        }

        void setTeacherID(int ID) {
            teacherID = ID;
        }

        void setName(string n) {
            name = n;
        }

        void setBMS(double b) {
            basicMonthlySalary = b;
        }

        int getTeacherID() {
            return teacherID;
        }

        string getName() {
            return name;
        }

        double getBMS() {
            return basicMonthlySalary;
        }

        double calculateNetMonthlySalary() {
            double allowance = (basicMonthlySalary * 0.2) + (basicMonthlySalary * 0.1);
            double gross = basicMonthlySalary + allowance;
            double NetMonthlySalary = gross - (gross * 0.12);

            if(gross > 50000.00) {
                NetMonthlySalary -= 1500.00;
            }
            return NetMonthlySalary;
        }

        void display() {
            cout << "Teacher ID : " << teacherID << endl;
            cout << "Name : " << name << endl;
            cout << "Basic Monthly Salary : " << basicMonthlySalary << " BDT" << endl;
            cout << "Net Monthly Salary : " << calculateNetMonthlySalary() << " BDT" << endl;
            cout << "------------------------------------------------------" << endl;
        }
};

int main() {
    Teacher t1;
    t1.setTeacherID(1011);
    t1.setName("Alice Smith");
    t1.setBMS(40000.00);
    t1.display();

    Teacher t2(1012, "John Doe", 55000.00);
    t2.display();
    return 0;
}
