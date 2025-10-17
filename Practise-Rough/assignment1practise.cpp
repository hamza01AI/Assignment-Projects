#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
//declaration
string sub[5];
float num;
float per;
int total;
char grad;

//Input using getline command to get multi word input
for(int i = 1;  i<=5; i++) {

	cout << "Enter Subject " << i<< " Name: ";
	cin >> sub[i];

}
for(int x =1; x<6; x++){

per[x]=( num[x]/100)*100;
if(per[x]>90)
{
    grad[x]="A+";
}
else if (per[x]>89){
    grad[x]='A';
}

else if (per[x]>79){
    grad[x]='B';
}
else if (per[x]>69){
    grad[x]='C';
}
else if (per[x]>59){
    grad[x]='D';
}
else grad[x]='F';
return 0;

}

}