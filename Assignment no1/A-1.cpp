#include <iostream>
using namespace std;
int main(){

// Question No: 3
// Find the largest Number out of Three

int num1, num2, num3;
cout<<" Enter Number 1:"<<endl;
cin>>num1;
cout<<" Enter Number 2:"<<endl; 
cin>>num2;
cout<<" Enter Number 3:"<<endl;
cin>>num3;

//declared and initialized three variables

if (num1 >= num2 && num1 >= num3) {
    cout << "The largest number is: " << num1 << endl;}

else if (num2 >= num1 && num2 >= num3) {
    cout << "The largest number is: " << num2 << endl;}
else {
    cout << "The largest number is: " << num3 << endl;}

    return 0;
 






 }