#include <iostream>
#include <string>
using namespace std;
int main()
{


string pass;
string key="python123";

bool istrue=true;
while(istrue)
{
cout<<"Enter Passwor    d"<<endl;
cin>>pass;

if(pass==key)
{
 cout<<"Correct Password"<<endl;
 istrue=false;

}
else
{
    cout<<"Incorrect Password"<<endl;
    
}



}


}