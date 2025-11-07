#include <iostream>
using namespace std;

void reversenumber(int n)
{
    int x;
    int rev;
    while(n>0)
    {
        x=n/10;
        rev =(rev*10)+x;
        
        n=n%10;
        int rem


    

    }
    cout<<rev;
}

int main()
{
    reversenumber(12);
}