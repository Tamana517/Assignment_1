/*
Q1: Find two numbers in an array whose difference equals K. Given an array arr[] and a positive
integer k, the task is to count all pairs (i, j) such that i < j and absolute value of (arr[i] - arr[j])
is equal to k.
*/

//Time Complexity: O(n^2)
//Space Complexity: O(1)

#include <iostream>
using namespace std;

// Insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Count pairs with difference = k (handles duplicates)
int countPairsWithDiffK(int arr[], int n, int k) {
    insertionSort(arr, n);

    int i = 0, j = 0, cnt = 0;
    while (j < n) {
        if (arr[j] - arr[i] < k) j++;       // increase diff
        else if (arr[j] - arr[i] > k) i++;  // decrease diff
        else {
            int ele1 = arr[i], ele2 = arr[j];
            int cnt1 = 0, cnt2 = 0;

            // count frequency of duplicates
            while (j < n && arr[j] == ele2) { j++; cnt2++; }
            while (i < n && arr[i] == ele1) { i++; cnt1++; }

            if (ele1 == ele2) 
                cnt += (cnt1 * (cnt1 - 1)) / 2; // same elements
            else 
                cnt += cnt1 * cnt2;             // different elements
        }
    }
    return cnt;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target difference k: ";
    cin >> k;

    cout << "Total pairs = " << countPairsWithDiffK(arr, n, k) << endl;
    return 0;
}
