#include <iostream>
#include <cstring>

using namespace std; 

char board[3][3]={{'1','2','3'}, {'4','5','6'},{'7','8','9'}};
int currentplayer = 1;
char currentmarker = 'X';

void displayboard(){

for(int i=0;i<3;i++){
    
cout<<" ";
for(int j=0;j<3;j++){

cout<<board[i][j];
if(j<2)cout<<" | ";
}
cout<<endl;
if (i<2)cout<<"----------"<<endl;
}
}




void slotnumber(){
    int slot;
    int row;
    int col;
    while(true){
    cout<<"Enter Slot Number: ";
    cin>> slot;
    
    if (slot<1 || slot>9)
    {cout<<"You have Entered an invalid slot number, Try Again"<<endl;
        continue;
        }
    
    row=(slot-1)/3;
    col=(slot-1)%3;
    
    if(board[row][col]=='X' || board[row][col]=='O'){
cout<<"Slot Already Occupied";
    }
    break;
    }
    if(currentplayer==1){currentmarker='X';}
    else currentmarker='O';
    board[row][col]=currentmarker;
    currentplayer++;


   displayboard();


    }
    


bool checkwin(char board[3][3], char player){

for(int j=0; j<3;j++){

    if(board[j][0]==board[j][1]== board[j][2] ||
        board[0][j]==board[1][j]==board[2][j])
        return true;
    }
if(board[0][0]==board[1][1]==board[2][2] ||
    board[0][2]==board[1][1]==board[2][0] )
    return true;
    else return false;

   
}

bool IsDraw(char board[3][3]){


for(int x=0; x<3; x++)
{for (int i=0;i,3;i++){

    if (board[x][i]==' ')
    return false;
}
}

 return true;
}



void Game(){

    for(int i=1; i<3; i++)
    {
cout<<"Player "<<i<< "Turn\n" ;
slotnumber();
checkwin(board, currentmarker);
IsDraw(board);
if(i==2){i--;}



}

    }






int main()
{

cout<<"----TIC TAC TOE----\n";
cout<<"Press Enter To Start The Game \n";
cin.ignore(); // Takes A blank space as input from user 
cout<<"Player 1 Marker is : X \n";
cout<<"Player 2 Makrer is : O \n";
cout<<endl;
displayboard();
Game();


}