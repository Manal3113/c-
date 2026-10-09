#include <iostream>
using namespace std;

class Product
{
    int productID, quantity;
    string productName;
    float unitPrice, totalCost;

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    void calculate()
    {
        totalCost = quantity * unitPrice;
    }

    void display()
    {
        cout << "\nProduct ID: " << productID;
        cout << "\nProduct Name: " << productName;
        cout << "\nQuantity: " << quantity;
        cout << "\nUnit Price: " << unitPrice;
        cout << "\nTotal Cost: " << totalCost;
    }
};

int main()
{
    Product p;
    p.accept();
    p.calculate();
    p.display();

    return 0;
}
```
