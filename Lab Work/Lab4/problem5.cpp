#include <iostream>
using namespace std;

int main() {
    bool istrue = true;
    cout << "---- Simple Calculator ----" << endl;

    while (istrue) {
        int opr;
        int num1, num2;

        cout << "Enter The Operation To Be Performed" << endl;
        cout << "1. +\n2. -\n3. *\n4. /\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> opr;
        cout << endl;

        switch (opr) {
            case 1:
                cout << "Enter Num1: ";
                cin >> num1;
                cout << "Enter Num2: ";
                cin >> num2;
                cout << "Value after addition: " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Enter Num1: ";
                cin >> num1;
                cout << "Enter Num2: ";
                cin >> num2;
                cout << "Value after subtraction: " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Enter Num1: ";
                cin >> num1;
                cout << "Enter Num2: ";
                cin >> num2;
                cout << "Value after multiplication: " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Enter Num1: ";
                cin >> num1;
                cout << "Enter Num2: ";
                cin >> num2;
                if (num2 != 0)
                    cout << "Value after division: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;

            case 5:
                cout << "Exiting calculator..." << endl;
                istrue = false;
                break; 
    
                    
                        
            default:
                cout << "Invalid input!" << endl;
        }

        cout << endl;
    }

    return 0;
}
