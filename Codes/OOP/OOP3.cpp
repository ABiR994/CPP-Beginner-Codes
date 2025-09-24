#include <iostream>
#include <cstring>
using namespace std;

class Employee {
    private:
        int empCode;
        string name;
        double baseMonthlySalary;
    public:
        Employee() {
            empCode = 0;
            name = "";
            baseMonthlySalary = 0.0;
        }

        Employee(int e, string n, double b) {
            empCode = e;
            name = n;
            baseMonthlySalary = b;
        }

        void setEmpCode(int e) {
            empCode = e;
        }

        void setName(string n) {
            name = n;
        }

        void setBaseMonthlySalary(double b) {
            baseMonthlySalary = b;
        }

        int getEmpCode() {
            return empCode;
        }

        string getName() {
            return name;
        }

        double getBaseMonthlySalary() {
            return baseMonthlySalary;
        }

        double calculateNetMonthlySalary() {
            double allowance = (baseMonthlySalary * 0.15) + (baseMonthlySalary * 0.05);
            double gross = baseMonthlySalary + allowance;
            double netMonthlySalary = gross - (gross * 0.1);

            if (gross > 45000) {
                netMonthlySalary -= 2000;
            }

            return netMonthlySalary;
        }

        void display() {
            cout << "Employee code: " << empCode << endl;
            cout << "Name: " << name << endl;
            cout << "Base Salary: " << baseMonthlySalary << " BDT" << endl;
            cout << "Net Monthly Salary: " << calculateNetMonthlySalary() << " BDT" << endl;
            cout << endl;
        }
};


int main() {
    Employee e1;
    e1.setEmpCode(1001);
    e1.setName("Alice Smith");
    e1.setBaseMonthlySalary(40000.00);
    e1.display();

    Employee e2(1011, "John Doe", 55000.00);
    e2.display();

    return 0;
}
