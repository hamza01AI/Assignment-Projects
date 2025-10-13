#include <iostream>
using namespace std;
int main(){

int num1,num2;
cout<<"Enter Number 1 : ";
cin>>num1;

cout<<"Enter Number 2 : ";
cin>>num2;
cout<<endl;

//operation to change values

num1=num1+num2;
num2=num1-num2;
num1=num1-num2;

cout<<"Number 1  After Interchaning Values: "<<num1;
cout<<endl;
cout<<"Number 2 After Interchanging Values: "<<num2;



}