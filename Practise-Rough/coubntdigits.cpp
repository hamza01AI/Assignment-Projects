#include <iostream>
using namespace std;

void countdigits(int n)
{   int count=0;
    while(n>0)
    {
        n=n/10;
        count++;

    }
    
    cout<<count;
}

int main()
{

    countdigits(20000000);
}