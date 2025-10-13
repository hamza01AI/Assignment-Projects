#include <iostream>
#include <string.h> // to use arrays
#include <string>
#include <iomanip> // for using of formatting functions
using namespace std;
int main(){
//declaration

string sub[5];//string to store subject name
float num_obt[5];//float data type to store obtained marks even in decimals 
float per[6];//array to percentage values in floating point
int marks_total[5];//total subject marks
string  grad[6]; // string to store grades ^char is not used because of grade "A+""
float total_obt = 0;// total obtained marks
int total = 0;//total marks 

//Input using getline command to get multi word input
// loop  is used to take input of both subject name and marks
 

for(int i = 0;  i<5; i++) {

	cout << "Enter Subject " << i+1 << " Name: ";
   
	getline(cin,sub[i]);//to take multi word input
    cout<<"Enter Total Marks: ";
    cin>>marks_total[i];
     cout<< "Enter Obtained Marks: ";
    cin>>num_obt[i];
    cout<<endl;
     cin.ignore();// this is used to ignore the /n left by the user 
     //not using this results in getline seeing the /n and assuming its an empty line and hence ignoring input from the user
     // so in second iteration, because of existing /n in input buffer, get line assumes this /n as empty line and stores nothuing in string and moves on without taking input
}


//ARITHMETIC OPERATIONS 
//Percantage calculation Using loop and Grade Determination

for(int x = 0; x < 5; x++){ 
total_obt = total_obt+ num_obt[x];//total and Obtained marks are calculated simulataneously 
total = total + marks_total[x];//
per[x] = (num_obt[x] / marks_total[x]) * 100;
if(per[x]>90)
{
    grad[x]="A+";
}
else if (per[x]>89){
    grad[x]="A";
}

else if (per[x]>79){
    grad[x]="B";
}
else if (per[x]>69){
    grad[x]="C";
}
else if (per[x]>59){
    grad[x]="D";
}
else grad[x]="F";


}


//Condition For Calculation Of Grade Of Total Marks

   per[5] = (total_obt * 100.0) / total;
    if(per[5] > 90) grad[5] = "A+";
    else if(per[5] > 89) grad[5] = "A";
    else if(per[5] > 79) grad[5] = "B";
    else if(per[5] > 69) grad[5] = "C";
    else if(per[5] > 59) grad[5] = "D";
    else grad[5] = "F";



//Proper formatting for the display of result using formatting functions
cout<<"---------------------------------------------------------------"<<endl;
cout<<"| " <<left<< setw(30)<< "Subject Name"
<<"| "<<setw(15)<<"Total Marks"
<<"| "<< setw(15)<<"Marks Obtained"  
<<"| "<<setw(12)<<"Percentage"
<<"| "<<setw(5)<<"Grade"<<endl;
cout<<"--------------------------------------------------------------------------------------------------"<<endl;
for(int j = 0; j<5; j++)
{
cout<<"| "<<left<<setw(30 )<< sub[j]
<<"| " <<setw(15)<<marks_total[j]
<<"| " <<setw(15)<<fixed<<setprecision(0)<< num_obt[j]
<<"| " <<setw(12)<<fixed<<setprecision(1)<<per[j] // setprecion was used along with fixed to define decimals values for percentage

<<"| " <<setw(5) <<grad[j]<<endl;
cout<<"--------------------------------------------------------------------------------------------------"<<endl;


}

cout<<left<<setw(30)<<"Total Marks"
<<"| "<<setw(15)<<total
<<"| "<<setw(15)<<fixed<<setprecision(0)<<  total_obt
<<"| "<<setw(12)<<fixed<<setprecision(1) <<per[5]
<<"| " <<setw(5)<<grad[5];
cout<<endl;

cout<<"--------------------------------------------------------------------------------------------------"<<endl;

if(per[5]<59)cout<<"Work harder next time,You Are Fail";

else cout<<"Congratulations,You Are Pass";




return 0;













}