#include <iostream>
using namespace std;
int main()
{

    cout<<"Enter The Number of rows in cinema"<<endl;
    int row;
    cin>>row;
    cout<<"Enter the number of columns in cinema"<<endl;
    int col;
    cin>>col;
    int tot=row*col;

cout<<" ---------------CINEMA---------------"<<endl<<"       |______________________|" <<endl<<endl;

char free='F';
char occ='R';
int s=0;
cout<<"Following Are the Seats"<<endl;
while(true){
     int num=1;
for(int i=1;i<=row;i++)
{
   


    
 for(int j=1;j<=col;j++)
 {  
    
    if(num==s){
        cout<<"Seat"<<num<<"-("<<j<<"-"<<i<<")"<<occ<<"  ";

    }
    else cout<<"Seat"<<num<<"-("<<j<<"-"<<i<<")"<<free<<"  ";
    
    
    num++;
 }
 cout<<endl;
}

cout<<"Enter The Seat Number"<<endl;
cin>>s;
cout<<endl;

}

}






