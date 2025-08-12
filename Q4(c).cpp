#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int mat[10][10], trans[10][10];

    // Input matrix
    cout << "Enter matrix elements:\n";
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin >> mat[i][j];

    // Find transpose
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            trans[j][i] = mat[i][j]; // Swap row & col index

    // Output transpose
    cout << "Transpose:\n";
    for(int i=0; i<cols; i++) {
        for(int j=0; j<rows; j++)
            cout << trans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
