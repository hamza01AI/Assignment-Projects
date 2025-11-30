#include<iostream>
#include <string>
#include <vector>
using namespace std;

struct Accdata{
    int accountNumber;
    string name;
    int password;
    int balance;
};

void inputdata(vector<Accdata>& Data, int& count) 
{
    Accdata temp;
    int choice;
    
    cin.ignore();
    
    do
    { 
        temp.accountNumber = 1000 + count;
        
        cout << "Enter Account Holder Name: ";
        getline(cin, temp.name);
        
        cout << "Enter Numeric pin: ";
        cin >> temp.password;
        
        cout << "Enter The Current Balance Of this Account Holder: ";
        cin >> temp.balance;

        Data.push_back(temp);
        count++;

        cout << "\n====================================" << endl;
        cout << "User Added Successfully!" << endl;
        cout << "Account Number: " << temp.accountNumber << endl;
        cout << "Account Holder: " << temp.name << endl;
        cout << "====================================" << endl;
        
        cout << "\nAdd another account? \n 1.Yes    2.No\n";
        cin >> choice;
        cin.ignore();
    
    } while (choice == 1);
    
    cout << "\nData Updated! Total Accounts: " << count << "\n";
    cin.get();
}

int findacc(int accountNumber, const vector<Accdata>& Data)
{
    for(int i = 0; i < Data.size(); i++)
    {
        if(accountNumber == Data[i].accountNumber)
        {
            return i;
        }
    }
    return -1;
}

int input(vector<Accdata>& Data)
{
    int accountNumber;
    int pin;

    cout << "\nEnter Account Number: ";
    cin >> accountNumber;
    
    int accindex = findacc(accountNumber, Data);
    if(accindex == -1)
    {
        cout << "Account Number Not Found" << endl;
        return -1;
    }
    
    cout << "Account Holder: " << Data[accindex].name << endl;
    
    int attempts = 0;
    do
    {
         cout << "Enter Pin: ";
         cin >> pin;
         
         if (Data[accindex].password == pin)
         {
            cout << "Login Successful!" << endl;
            return accindex;
         }
         
         attempts++;
         
         if(attempts < 3)
         {
             cout << "Wrong PIN! " << (3 - attempts) << " attempts left." << endl;
         }
         
    } while (attempts < 3);
    
    cout << "Too many wrong tries, Login Locked" << endl;
    return -1;
}

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

void checkbalance(int n, const vector<Accdata>& Data) {
    cout << "\n====================================" << endl;
    cout << "Account Number: " << Data[n].accountNumber << endl;
    cout << "Account Holder: " << Data[n].name << endl;
    cout << "Balance: $" << Data[n].balance << endl;
    cout << "====================================" << endl;
}

void withdraw(int n, vector<Accdata>& Data) {
    int choice, amount;
    
    cout << "\n1. Fast Cash    2. Custom Amount\nChoice: ";
    cin >> choice;
    
    if(choice == 1) {
        const int fastCash[4] = {1000, 5000, 10000, 15000};
        cout << "\n1. $1000    2. $5000\n3. $10000   4. $15000\nSelect: ";
        cin >> choice;
        
        if(choice < 1 || choice > 4) {
            cout << "Invalid!\n";
            return;
        }
        
        amount = fastCash[choice - 1];
    }
    else if(choice == 2) {
        cout << "Enter amount: $";
        cin >> amount;
        
        if(amount <= 0) {
            cout << "Invalid amount!\n";
            return;
        }
    }
    else {
        cout << "Invalid option!\n";
        return;
    }
    
    if(amount > Data[n].balance) {
        cout << "Insufficient balance! Available: $" << Data[n].balance << "\n";
        return;
    }
    
    Data[n].balance -= amount;
    cout << "\nWithdrawal: $" << amount 
         << "\nNew Balance: $" << Data[n].balance << "\n";
}

void deposit(int n, vector<Accdata>& Data) {
    int amount;
    cout << "Enter deposit amount: $";
    cin >> amount;
    
    if(amount <= 0) {
        cout << "Invalid amount!\n";
        return;
    }
    
    Data[n].balance += amount;
    cout << "\nDeposit: $" << amount 
         << "\nNew Balance: $" << Data[n].balance << "\n";
}

int main() {
    vector<Accdata> Data;
    int acccount = 0;
    
    clearScreen();
    cout << "========== ABC BANK Data Entry ==========\n\n";
    inputdata(Data, acccount);
    
    if(acccount == 0) {
        cout << "No accounts created.\n";
        return 0;
    }
    
    while(true) {
        clearScreen();
        cout << "========== ABC BANK ATM ==========\n";
        
        int accountIndex = input(Data);
        
        if(accountIndex == -1) {
            cin.ignore();
            cin.get();
            continue;
        }
        
        bool active = true;
        while(active) {
            int select;
            cout << "\n1. Check Balance  2. Withdraw  3. Deposit  4. Logout\nChoice: ";
            cin >> select;
            
            switch(select) {
                case 1: checkbalance(accountIndex, Data); break;
                case 2: withdraw(accountIndex, Data); break;
                case 3: deposit(accountIndex, Data); break;
                case 4: active = false; continue;
                default: cout << "Invalid!\n";
            }
            
            if(active) {
                char cont;
                cout << "\nAnother transaction? (y/n): ";
                cin >> cont;
                active = (cont == 'y' || cont == 'Y');
            }
        }
        
        cout << "\nThank you for banking with ABC BANK!\n";
        cin.ignore();
        cin.get();
    }
    
    return 0;
}