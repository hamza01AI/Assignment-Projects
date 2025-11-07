#include <iostream>
#include <cmath>
using namespace std;
void line()
{
    cout<<"----------------------------------"<<endl;
}
int getnumber()
{
    int x;
    cout<<"Enter Number";
    cin>>x;
    return x;
}

void countDigits(int x) {
    int j = 0;
    while (x > 0) {
        x = x / 10;
        j++;
    }
    cout << "Number Of Digits Are " << j << endl << endl;
}

void sumOfDigits(int x) {
    int sum = 0;
    while (x > 0) {
        int rem = x % 10;
        sum += rem;
        x = x / 10;
    }
  cout << "Sum of digits is " << sum << endl << endl;
}

void evenOdd(int x) {
    if (x % 2 != 0)
        cout << "It's Odd" << endl << endl;
    else
        cout << "It's Even" << endl << endl;
}

void prime(int x) {
    if (x <= 1) {
        cout << "Zero and One are neither prime nor composite, enter a positive number greater than 1." << endl << endl;
        return;
    }
    bool isPrime = true;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Prime" << endl << endl;
    else
        cout << "Not Prime" << endl << endl;
}

void menu() {
    cout << "-----Number Analyzer-----" << endl;
    int g;
    bool istrue = true;
    while (istrue) {
        cout << "1. Add Digits\n2. Count Digits\n3. Check Even & Odd\n4. Check For Prime\n5. Exit" << endl;
        cout << "Choose An Option: ";
        cin >> g ;
    
     // int x;
     // cout << "Enter Number: ";
    //  cin >> x;
        int x=getnumber();
        switch (g) {
            case 1: sumOfDigits(x); break;
            case 2: countDigits(x); break;
            case 3: evenOdd(x); break;
            case 4: prime(x); break;
            case 5: istrue=false;
            default: cout << "Invalid Option" << endl << endl; break;
        }
        line();
    }
}

int main() {
    menu();
    return 0;
}
