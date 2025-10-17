#include <iostream>
using namespace std;

int main()
{

cout<<"-------------------------------COUNT EVEN AND ODD NUMBERS-------------------------------"<<endl<<endl;    
bool istrue=true;

int count_odd=0;
int count_even=0;

while(istrue)
{

int num;
cout<<"Enter A Number : "<<endl;
cin>>num;


if(num%2==0)
{
    count_even=count_even+1;
}
else {count_odd=count_odd+1;}

if(num==0){cout<<"You Exited The Program"<<endl; 
    istrue=false;
cout<<"You entered"<<" "<<count_even<<" even number/s & "<< count_odd<< " odd number/s";}






}//while loop














}