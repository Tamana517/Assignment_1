/*
Q4(b): Implement the logic to find the matrix multiplication.
*/

#include <iostream>
using namespace std;

void multiplyMatrices() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Matrix A
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}; // Matrix B
    int result[3][3]; // Result matrix

    cout << "Matrix A * Matrix B =" << endl;

    // Multiply matrices
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            result[i][j] = 0;
            for(int k=0; k<3; k++) {
                result[i][j] += a[i][k] * b[k][j]; // Dot product
            }
            cout << result[i][j] << " "; // Print result
        }
        cout << endl;
    }
}

int main() {
    multiplyMatrices(); // Call multiplication
    return 0;
}
