#include <iostream>
using namespace std;
int main(){

int n;

 
cout<<"Enter the number till you want the palindrome to be displayed";
cin>>n;


for(int i=1;i<=n;i++)
{
int rev=0;
bool istrue=true;
int temp=i;
    while(istrue)
    {
        
        int rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
        if(temp/10==0)
        {
            istrue= false;
        }
        
        

        if(rev==i)
        {
            cout<<i;
        }
        




    


}

}
}













