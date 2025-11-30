#include <iostream>
#include <cstdlib>
using namespace std;

string name[100];
int password[100];
int balance[100];


void inputdata( )
{
    int n=0;
    bool istrue=true;
    int choice;
    while(istrue)
    {
        cout<<"Enter Account Holder Name"<<endl;
        getline(cin,name[n]);
        cout<<"Enter Numeric pin"<<endl;
        cin>>password[n];
        cout<<"Enter The Current Balance Of this Account Holder"<<endl;
        cin>>balance[n];


        cout<<"Enter another username \n 1.Yes    2.NO";
        
        cin>>choice;
        
        switch(choice)
        {
            case 1:
        
            istrue= true;
            break;

            case 2:
            istrue=false;
            break;
         }



    }


}
int accountselect()
{   string input;
    cout<<"Enter Account Holder Name: "<<endl;
    getline(cin,input);
    for(int i=0; i<=1000;i++)
    {
        if (input==name[i])
        {
         return i;
        }
    }
}

int passwrd()
{
    int x= accountselect();
    int j;
    cout<<"Enter Your Pin: "<<endl;
    cin>>j;
     while(j!=password[x])
        {
            cout<<"Wrong Pin Entered, Enter Password Again: "<<endl;;
            cin>>j;
        }
    if(j==password[x])
    {
    return x;
    }
    
}

void checkbalance(){
int x=passwrd();
cout<<"This Is Your Current Balance : "<<balance[x];

}

void withdraw()
{
int j=passwrd();    
int x;
int y; 

cout<<"1. Fast Cash           2. Enter Amount"<<endl;
cin>>x;
if(x==1)
{


int z[4]={1000,5000,10000,15000};   
cout<<endl<<endl;
cout<<"1. 1000         2. 5000\n"<<"3. 10000        4. 15000"<<endl;
cout<<"Enter Number :";
int choice;
cin>>choice;
switch(choice-1){
    
    case 0:
    balance[j]= balance[j]-1000;
    cout<<"Your balance is  "<<balance;
    break;
    
    case 2:
    balance[j]= balance[j]-5000;
    cout<<"Your balance is  "<<balance[j];
    break;

    case 3:
    balance[j]= balance[j]-10000;
    cout<<"Your balance is  "<<balance[j];
    break;

    case 4:
    balance[j]= balance[j]-15000;
    cout<<"Your balance is  "<<balance;
    break;
}
}
else if(x==2)
{   while(true){
    cout<<"Enter the amount of money you want to withdraw :"<<endl;
    cin>>y;
    if(y>balance[j]){cout<<"You dont have enough balance, Enter Money again"<<endl;
    continue;}
    balance[j]= balance[j]-y;
    cout<<"Your balance is :"<<balance[j];
    break;
}}



//balance = balance - money;



}



int main()
{
system("cls");
cout<<"-----WELCOME TO ABC ATM MACHINE-----"<<endl;

inputdata();

while(true){
cout<<"1. Check Balance         2. Withdraw Money"<<endl;
int select;
cin>>select;



while(true){



switch(select)
{
case 1:
checkbalance();
break;

case 2:
withdraw();
break;


}
break;
}
int o;
cout<<endl;
cout<<"You Want To Make Another Transaction?"<<endl<<"1. Yes    2. No"<<endl;
cin>>o;


if (o==1){continue;}

else
break;
}

}


struct AccountData{

    string name;
    int balance;
    int pin;
}

vector <AccountData> data;
    

}










#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

struct Accdata{
string name;
int password;
int balance;
}

// To Store Data Of The account holders
void inputdata(vector<Accdata>& Data) //call by refrence 
{
    Accdata temp;
    int choice;
    do
    { cout<<"Enter Account Holder Name"<<endl;
    
        getline(cin,temp.name);
        cout<<"Enter Numeric pin"<<endl;
        cin>>temp.password;
        
        cout<<"Enter The Current Balance Of this Account Holder"<<endl<<endl;
        cin>>temp.balance;

        Data.push_back(temp);

        cout<<"User Added Successfully"<<endl;
        cout<<"Enter another username \n 1.Yes    2.NO"<<endl;
        
        cin>>choice;

    
    } while (choice==1);
    
}
//UI BACKEND

//To get Username 
int input(vector<Accdata> Data)
{
    string name;
    int pin;

    cout<<"Enter Account Holder Name";
    getline(cin,name);
    cout<<"Enter Pin";
    cin>>pin;
}