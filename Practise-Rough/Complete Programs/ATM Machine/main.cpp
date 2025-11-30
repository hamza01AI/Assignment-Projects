#include<iostream>
#include <string>
#include <vector>
using namespace std;

struct Accdata{
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
        cout << "Enter Account Holder Name: ";
        getline(cin, temp.name);
        
        cout << "Enter Numeric pin: ";
        cin >> temp.password;
        
        cout << "Enter The Current Balance Of this Account Holder: ";
        cin >> temp.balance;

        Data.push_back(temp);
        count++;

        cout << "\nUser Added Successfully" << endl;
        cout << "Enter another username \n 1.Yes    2.NO\n";
        
        cin >> choice;
        cin.ignore();
    
    } while (choice == 1);
    
    cout << "\nData Updated! Total Accounts: " << count << "\n";
    cin.get();
}

int findacc(string name, const vector<Accdata>& Data)
{
    for(int i = 0; i < Data.size(); i++)
    {
        if(name == Data[i].name)
        {
            return i;
        }
    }
    return -1;
}

int input(vector<Accdata>& Data)
{
    string name;
    int pin;

    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    
    int accindex = findacc(name, Data);
    if(accindex == -1)
    {
        cout << "Account Name Not Found" << endl;
        return -1;
    }
    
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
    cout << "\nAccount Holder Name: " << Data[n].name 
         << "\nBalance: $" << Data[n].balance << "\n";
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