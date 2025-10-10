#include <iostream>
using namespace std;
#include <iomanip> 
int main(){
//initializing
float num1;
float num2;
cout<<" Enter Number 1:"<<endl;
cin>>num1;
cout<<" Enter Number 2:"<<endl; 
cin>>num2;
//Arithmetic Operations
float sum = num1 + num2;
cout << fixed << setprecision(3);
cout<<" The Sum of Two Numbers is: "<<sum<<endl;
float diff = num1 - num2;
cout<<" The Difference of Two Numbers is: "<<diff<<endl;
float prod = num1 * num2;
cout<<" The Product of Two Numbers is: "<<prod<<endl;
float div = num1 / num2;
cout<<" The Division of Two Numbers is: "<<div<<endl;
// Output is displayed in the same data type as input

//Explicit Type Casting will convert it to Integer and display results in "int" data type
cout<<endl;
int sum1 = (int)num1 + (int)num2;
cout<<" The Sum of Two Numbers after Type Casting is: "<<sum1<<endl;
int diff1 = (int)num1 - (int)num2;  
cout<<" The Difference of Two Numbers after Type Casting is: "<<diff1<<endl;
int prod1 = (int)num1 * (int)num2;
cout<<" The Product of Two Numbers after Type Casting is: "<<prod1<<endl;
int div1 = (int)num1 / (int)num2;
cout<<" The Division of Two Numbers after Type Casting is: "<<div1<<endl;
return 0;
// The Arithmetic Operations are Performed















}