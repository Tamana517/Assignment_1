/*
Q4: Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
put all 0s first, then all 1s and all 2s in last.
*/

// Time Complexity: O(n)   (single pass through the array)
// Space Complexity: O(1)  (no extra array used)

#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    // Apply Dutch National Flag algorithm
    while (mid <= high) {
        if (arr[mid] == 0) {
            // swap arr[low] and arr[mid]
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            // swap arr[mid] and arr[high]
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (only 0, 1, or 2):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort012(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
