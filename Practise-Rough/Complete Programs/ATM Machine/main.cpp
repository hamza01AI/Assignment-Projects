#include <iostream>
#include <cstdlib>
using namespace std;

// Gloabal Variables
string name[100];
int password[100];
int balance[100];


// To Store Data Of The account holders
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
       


        cout<<"Enter another username \n 1.Yes    2.NO"<<endl;
        
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

//UI BACKEND

//To get Username 
int input()
{
    
}


// Check Balance function
void checkbalance(int n){

cout<<"This Is Your Current Balance : "<<balance[n];
}

//Withdraw Funtion
void withdraw(int n)
{
   
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
    balance[n]= balance[n]-1000;
    cout<<"Your balance is  "<<balance[n];
    break;
    
    case 2:
    balance[n]= balance[n]-5000;
    cout<<"Your balance is  "<<balance[n];
    break;

    case 3:
    balance[n]= balance[n]-10000;
    cout<<"Your balance is  "<<balance[n];
    break;

    case 4:
    balance[n]= balance[n]-15000;
    cout<<"Your balance is  "<<balance[n];
    break;
}
}
else if(x==2)
{   while(true){
    cout<<"Enter the amount of money you want to withdraw :"<<endl;
    cin>>y;
    if(y>balance[n]){cout<<"You dont have enough balance, Enter Money again"<<endl;
    continue;}
    balance[n]= balance[n]-y;
    cout<<"Your balance is :"<<balance[n];
    break;
}}
}


//Main Funtion

int main()
{
    system("cls");
    cout<<"ABC BANK Data Entry"<<endl<<endl;
    inputdata();
    cout<<"Your Data is successfully Updated In the directory"<<endl;
    while(true)
    {
    system("cls");
    cout<<"----------ABC BANK ATM MACHINE----------"<<endl<<endl;
    int x= accountselect();

    while(true){
cout<<"1. Check Balance         2. Withdraw Money"<<endl;
int select;
cin>>select;




while(true){



switch(select)
{
case 1:
checkbalance(x);
break;

case 2:
withdraw(x);
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
}
