#include <iostream>
#include <cstdlib>
using namespace std;

int balance=20000; // global variable
int usernumber;



void checkbalance(){

cout<<"This Is Your Current Balance : "<<balance;

}

void withdraw()
{
int x;
int y; 

cout<<"1. Fast Cash           2. Withdraw"<<endl;
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
    balance= balance-1000;
    cout<<"Your balance is  "<<balance;
    break;
    
    case 2:
    balance= balance-5000;
    cout<<"Your balance is  "<<balance;
    break;

    case 3:
    balance= balance-10000;
    cout<<"Your balance is  "<<balance;
    break;

    case 4:
    balance= balance-15000;
    cout<<"Your balance is  "<<balance;
    break;
}
}
else if(x==2)
{   while(true){
    cout<<"Enter the amount of money you want to withdraw :"<<endl;
    cin>>y;
    if(y>balance){cout<<"You dont have enough balance, Enter Money again"<<endl;
    continue;}
    balance= balance-y;
    cout<<"Your balance is :"<<balance;
    break;
}}



//balance = balance - money;



}



int main()
{
system("cls");
cout<<"-----WELCOME TO ABC ATM MACHINE-----"<<endl;

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


