/*
Q1: Find two numbers in an array whose difference equals K. Given an array arr[] and a positive
integer k, the task is to count all pairs (i, j) such that i < j and absolute value of (arr[i] - arr[j])
is equal to k.
*/

#include <iostream>
using namespace std;

// insertion sort
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

// count pairs with difference = k
int countPairsWithDiffK(int arr[], int n, int k) {
    insertionSort(arr, n);
    int i = 0, j = 1, cnt = 0;
    while (i < n && j < n) {
        int diff = arr[j] - arr[i];
        if (i != j && diff == k) { cnt++; i++; j++; } // found pair
        else if (diff > k) i++;  // move left
        else j++;                // move right
    }
    return cnt;
}

int main() {
    int n, k;
    cin >> n;                     // size
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> k;                     // target diff
    cout << countPairsWithDiffK(arr, n, k);
    return 0;
}
