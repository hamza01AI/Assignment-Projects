#include<iostream>
using namespace std;
int main()
{

cout<<"--------------Welcome To Electricity Bill Calculator--------------"<<endl;
cout<<"Select The Type Of Elctricity Connection You Have"<<endl;
cout<<"1.Domestic"<<endl<<"2.Commercial"<<endl;
int opt;
cin>>opt;
cout<<endl;
int unit;
cout<<"Enter The Amount Of Units Consumed :";
cin>>unit;
cout<<endl;
switch(opt)
{

case 1:if(unit<=100){cout<<"Your Electricity Bill Is : "<<unit*10;}
   else cout<<"Your Electricity Bill Is : "<<unit*15;
   break;

case 2:if(unit<=100){cout<<"Your Electricity Bill Is : "<<unit*20;}
   else cout<<"Your Electricity Bill Is : "<<unit*25;
   break;
}



}





