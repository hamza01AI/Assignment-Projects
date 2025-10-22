#include <iostream>
using namespace std;
int main(){

int num1 = 0;
int num2=1;
int str;
int x;
cout<<"Display the number till the series is to be displayed ";
cin>>x;
cout<<num1<<" "<<num2;
for(int i=1;i<=x;i++){

str= num1+num2;
num1=num2;
num2=str;
cout<<" "<<str;



}


}











