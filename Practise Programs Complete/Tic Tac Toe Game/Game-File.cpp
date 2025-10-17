#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

//Global variables
char board[3][3]={{'1','2','3'}, {'4','5','6'},{'7','8','9'}}; //2d Array
int currentplayer = 1;
char currentmarker = 'X';




// FUNCTIONS

//Display Board Function
void displayboard(){

for(int i=0;i<3;i++){ //loop For Rows
    
cout<<" ";
   for(int j=0;j<3;j++){ //loop for columns 
    
   cout<<board[i][j];
   if(j<2)cout<<" | ";
}
cout<<endl;
   if (i<2)cout<<"----------"<<endl;
}
}

//Function to take slot number from user 
void slotnumber(){
    int slot; //stores the slot number enter by the player
    int row;  // stores the row coordinate of the slot number
    int col;  // stores the column coordinate of the slot number
    
    while(true){
    cout<<"Enter Slot Number: ";
    cin>> slot;
    
    if (slot<1 || slot>9) //Check for Slot Number Validation
    {cout<<"You have Entered an invalid slot number, Try Again"<<endl;
        continue;
        }
    
    row=(slot-1)/3; //Converts Slot number into the row coordinate
    col=(slot-1)%3; //Converts Slot number into the column coordinate

    if(board[row][col]=='X' || board[row][col]=='O') // TO check if the slot number is already occupied or not
    {
    cout<<"Slot Already Occupied";
    continue;
    }
    
    break ; //Stops the while loop if there is a valid slot
    }

    currentmarker=(currentplayer%2==1)? 'X' : 'O';
    board[row][col]=currentmarker;
    currentplayer++;
    
    
   
}
    
//To check if anyone won after each move
bool checkwin(char board[3][3],char  player ){

for(int j=0; j<3;j++){

    if(board[j][0]==player&& board[j][1]==player && board[j][2]==player || //For checking of win in row
        board[0][j]== player  && board[1][j]== player && board[2][j]==player)   //For checking of win in column
        return true;
    }
if(board[0][0]== player && board[1][1]== player && board[2][2]==player || //For Diagonals
    board[0][2]== player && board[1][1]==player && board[2][0]==player )
    return true;
    else return false; 
}

//To check if the game is draw or not after each move
bool IsDraw(char board[3][3]){
    
for(int x=0; x<3; x++)
{   for (int i=0;i<3;i++){

    if (board[x][i]!='X' && board[x][i] != 'O') //Check for empty slot
    return false;
}
}
return true;
}


//Game Function in which the game will run
void game()
{

    while(true){

    displayboard();
    cout<<endl<<endl;;
 
     cout<<"Player "<<((currentplayer%2==1)?1:2)<<" Turn "<<endl;
    slotnumber();
    cout<<endl;
    cout<<"-------------------------------"<<endl;
    if(checkwin(board, currentmarker)){
        cout<<"Player "<<((currentplayer%2==1)?2:1)<<" Has Won";
        break ;
    }
    if(IsDraw(board)){
        cout<<"The Game is Drawn";    
        break;
   }
}
}

//Main Function
int main()
{
system ("cls");
cout<<"----TIC TAC TOE----\n";
cout<<"Press Enter To Start The Game \n";
cin.ignore(); // Takes A blank space as input from user 
cout<<"Player 1 Marker is : X \n";
cout<<"Player 2 Marker is : O \n";
cout<<endl;
game();
}