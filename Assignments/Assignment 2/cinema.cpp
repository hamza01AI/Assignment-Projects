#include <iostream>
using namespace std;

char cinema[100][100];
int rows, cols;

void menu(){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "(" << (i + 1) << "-" << (j + 1) << " " << cinema[i][j] << ") ";
        }
        cout << endl;
    }
}

void booking(){
    int row, col;
    while(true){
        cout << "To reserve a seat, please enter the Row (1-" << rows << ") and Column (1-" << cols << ") OR press 0 0 to Exit: ";
        cin >> row >> col;
        
        if (row == 0 || col == 0) {
            break;
        }
        
        if (row >= 1 && row <= rows && col >= 1 && col <= cols){
            if (cinema[row - 1][col - 1] == 'F'){
                cinema[row - 1][col - 1] = 'R';
                cout << "You have successfully reserved " << row << "-" << col << endl; 
            }else{
                cout << "Seat Not Available For " << row << "-" << col << endl; 
            }
        } else{
            cout << "Wrong Input " << endl;
        }
    }
}

void newmenu(){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "(" << (i + 1) << "-" << (j + 1) << " " << cinema[i][j] << ") ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cinema[i][j] = 'F';
        }
    }
    
    menu();
    booking();
    newmenu();
    
    return 0;
}