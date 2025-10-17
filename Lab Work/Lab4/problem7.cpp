#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(){


cout<<"-------Number Guessing Game-------"<<endl;
cout<<"The program has a built in secret number"<<endl<<"You have to guess that number"<<endl;
cout<<"Are you ready?"<<endl<<"Press enter to continue";
cin.ignore();

int sec_num=14;
bool istrue=true;


int num;
int counter=0;
cout<<"The Game Starts in"<<endl;
cout<<"3"<<endl;
this_thread::sleep_for(chrono::seconds(1));
cout<<"2"<<endl;
this_thread::sleep_for(chrono::seconds(1));
cout<<"1"<<endl;

while(istrue)
{
  
counter = counter + 1;


cout<<"ENTER YOUR GUESS NUMBER : "<<endl<<endl;
int num; 
cin>>num;
if(num!=sec_num)
{
cout<<"Wrong Guess, Try Again"<<endl<<endl;
 
if(counter%2==0){   
int opt;    
cout<<"Need A Hint?"<<endl<<"1.Yes"<<endl<<"2.No";
cin>>opt;
switch(opt)
{
 case 1: 
 if(sec_num<50)
 {
    cout<<"The Secret number is less than 50"<<endl;
    break;
 }
 else if (sec_num<100)
{
    cout<<"The Secret number is less than 100 and greater than 50"<<endl;
    break;
}

case 2:
break;
}}


}
else {
cout<<"Congratulations, You have guessed correctly" ;
sec_num= sec_num*3;
istrue=false;
}


}//while loop

}//Main function