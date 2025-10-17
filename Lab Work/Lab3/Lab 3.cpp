#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string product1, product2;
    int quantity1, quantity2;
    float price1, price2;

    cout << "Enter name of Product 1:" << endl;
    cin >> product1;
    cout << "Enter Unit Price of Product 1: ";
    cin >> price1;
    cout << endl;

    cout << "Enter Quantity of Product 1: ";
    cin >> quantity1;
    cout << endl;

    cout << "Enter name of Product 2:" << endl;
    cin >> product2;
    cout << "Enter Unit Price of Product 2: ";
    cin >> price2;
    cout << endl;

    cout << "Enter Quantity of Product 2: ";
    cin >> quantity2;
    cout << endl;
    
    float total1 =quantity1 *price1;
    float total2 = quantity2 *price2;

   cout << "------------------------------------------" << endl;
    cout << left << setw(15) << "Item" 
         << right << setw(10) << "Quantity" 
         << setw(10) << "Price" 
         << setw(10) << "Total" << endl;
    cout << "------------------------------------------" << endl;
    
     cout << left << setw(15) << product1
         << right << setw(10) << quantity1 
         << setw(10) << fixed << setprecision(2) << price1 
         << setw(10) << fixed << setprecision(2) << total1 << endl;

    cout << left << setw(15) << product2
         << right << setw(10) << quantity2 
         << setw(10) << fixed << setprecision(2) << price2 
         << setw(10) << fixed << setprecision(2) << total2 << endl;

    return 0;
}