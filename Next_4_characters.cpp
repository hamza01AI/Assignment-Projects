#include <iostream>
using namespace std;
int main(){

int x;
char ch1;
cout <<"Enter an integer"<<endl;
cin>>x;
cout<<"Enter a character"<<endl;
cin>>ch1;
cout<<"next 4 Integers Are:"<<x;
for(int i=1;i<=3;i++)
{
    int j=i+x;
    cout<<" \t"<<j;
}
cout<<endl;


cout<<"Next 4 Characters Are:"<<ch1;
cout<<ch1;
for(int i=1;i<=3;i++)
{
    int y=ch1+i;
    cout<<" \t"<<char(y);
}

return 0;









}