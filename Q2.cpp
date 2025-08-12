/*
Q2: Design the logic to remove the duplicate elements from an array.
After the deletion, the array should contain only unique elements.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;   // Handle empty array
    
    unordered_set<int> seen; // Track seen elements
    int unique = 0;         // Index for unique elements
    
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {  // If not seen
            seen.insert(arr[i]);                // Mark as seen
            arr[unique++] = arr[i];            // Store in array
        }
    }
    return unique;  // Return new size
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    n = removeDuplicates(arr, n);  // Remove duplicates
    
    cout << "\nUnique elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
