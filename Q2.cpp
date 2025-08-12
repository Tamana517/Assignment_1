/*
Q2: Design the logic to remove the duplicate elements from an array.
After the deletion, the array should contain only unique elements.
*/

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0; // Empty array case

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce array size
            } else {
                j++; // Move to next element only if no deletion
            }
        }
    }
    return n; // New size after removing duplicates
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

     // Print original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    n = removeDuplicates(arr, n); // Remove duplicates

    // Print array after duplicates removal
    cout << "\nUnique elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
