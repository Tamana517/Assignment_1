/*
Q4(a): Implement the logic to reverse the elements of an array.
*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    // Print original array
    cout << "Original: ";
    for(int i=0; i<size; i++) 
        cout << arr[i] << " ";

    // Reverse logic
    for(int i=0; i<size/2; i++) {
        swap(arr[i], arr[size-1-i]); // Swap elements
    }

    // Print reversed array
    cout << "\nReversed: ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    reverseArray(arr, size); // Call reverse function
    
    return 0;
}
