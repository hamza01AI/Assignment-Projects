#include <iostream>
using namespace std;

void swapValues(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
}

void reverseElements(int array[], int total) {
    for (int i = 0; i < total / 2; i++) {
        swapValues(array[i], array[total - 1 - i]);
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    int values[size];
    cout << "Enter " << size << " numbers: ";
    for (int pos = 0; pos < size; pos++) {
        cin >> values[pos];
    }
    
   
    
    reverseElements(values, size);
    
    cout << "Reversed: ";
    for (int num : values) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
