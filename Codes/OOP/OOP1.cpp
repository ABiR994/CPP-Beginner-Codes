#include <iostream>
using namespace std;

class ElectricityBill
{
private:
    int customerID;
    string customerName;
    int unitsConsumed;
    float billAmount;
    bool isEmpty;

public:
    ElectricityBill()
    {
        cout << "Empty Constructor Called" << endl;
        customerID = 101;
        customerName = "Alice";
        unitsConsumed = 350;
        isEmpty = true;
        displayBill();
    }

    ElectricityBill(int ID, string Name, int units)
    {
        customerID = ID;
        customerName = Name;
        unitsConsumed = units;
        isEmpty = false;
        displayBill();
    }

    void setCustomerID(int ID)
    {
        customerID = ID;
    }

    void setCustomerName(string name)
    {
        customerName = name;
    }

    void setUnitsConsumed(int units)
    {
        unitsConsumed = units;
    }

    int getCustomerID()
    {
        return customerID;
    }

    string getCustomerName()
    {
        return customerName;
    }

    int getUnitsConsumed()
    {
        return unitsConsumed;
    }

    float calculateBill()
    {
        if (unitsConsumed >= 0)
        {
            if (unitsConsumed <= 100)
            {
                billAmount = unitsConsumed * 5.0;
            }
            else if (unitsConsumed <= 300)
            {
                billAmount = (100 * 5.0) + ((unitsConsumed - 100) * 7.0);
            }
            else
            {
                billAmount = (100 * 5.0) + (200 * 7.0) + ((unitsConsumed - 300) * 10.0);
            }
        }
        else
        {
            billAmount = 0.0;
        }
        return billAmount;
    }

    void displayBill()
    {
        cout << "Customer ID: " << customerID << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        if (!isEmpty)
        {
            cout << "Total Bill Amount: " << calculateBill() << endl;
        }
    }
};

int main()
{
    ElectricityBill bill1;
    // bill1.displayBill();
    cout << "----- Electricity Bill -----" << endl;
    ElectricityBill bill2(101, "Alice", 350);
    // bill2.displayBill();
    return 0;
}
