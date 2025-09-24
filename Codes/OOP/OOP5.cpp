#include <iostream>
#include <cstring>
using namespace std;

class Product {
    private:
        int productID;
        string productName;
        double basePrice;
    public:
        Product() {
            productID = 0;
            productName = "";
            basePrice = 0.0;
        }

        Product(int ID, string n, double b) {
            productID = ID;
            productName = n;
            basePrice = b;
        }

        void setProductID(int ID) {
            productID = ID;
        }

        void setProductName(string n) {
            productName = n;
        }

        void setBasePrice(double b) {
            basePrice = b;
        }

        int getProductID() {
            return productID;
        }

        string getProductName() {
            return productName;
        }

        double getBasePrice() {
            return basePrice;
        }

        double calculateFinalPrice() {
            double discountedPrice = basePrice;
            if(basePrice > 1000.00) {
                discountedPrice = basePrice - (basePrice * 0.1);
            }
            double finalPrice = discountedPrice + (discountedPrice * 0.15);
            double shippingPrice = basePrice * 0.05;
            finalPrice += shippingPrice;
            return finalPrice;
        }

        void display() {
            cout << "Product ID : " << productID << endl;
            cout << "Product Name : " << productName << endl;
            cout << "Base Price : " << basePrice << " BDT" << endl;
            cout << "Final Price : " << calculateFinalPrice() << " BDT" << endl;
            cout << "------------------------------------------------------" << endl;
        }
};

int main() {
    Product p1;
    p1.setProductID(1011);
    p1.setProductName("Pringles");
    p1.setBasePrice(350.00);
    p1.display();

    Product p2(1012, "Apple Airpod", 1500.00);
    p2.display();
    return 0;
}
