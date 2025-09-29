#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter Number";
cin>>num;
if(num==0)
{
    cout<< "Zero Is Neither Prime Nor Composite, Enter a Non Zero Number";
}
if(num==1)
{
    cout<< "One does not meet the definition of Prime Number";
}

bool isPrime= true;

for (int i=2;i<=num-1;i++)
{

    if(num%i==0)
    {
        isPrime= false;
        break;
    }
   

}
if(isPrime==true)

cout <<"Prime";


else
 cout << "Not Prime";

}