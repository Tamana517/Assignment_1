/*
Q5: Write a program to find the sum of every row and every column
in a two-dimensional array.
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[10][10];

    // Input elements
    cout << "Enter elements:\n";
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin >> arr[i][j];

    // Sum of each row
    for(int i=0; i<rows; i++) {
        int rowSum = 0;
        for(int j=0; j<cols; j++)
            rowSum += arr[i][j]; // Add row elements
        cout << "Sum of row " << i+1 << " = " << rowSum << "\n";
    }

    // Sum of each column
    for(int j=0; j<cols; j++) {
        int colSum = 0;
        for(int i=0; i<rows; i++)
            colSum += arr[i][j]; // Add column elements
        cout << "Sum of column " << j+1 << " = " << colSum << "\n";
    }

    return 0;
}
