/*
Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
remaining elements to the right.
Note that elements beyond the length of the original array are not written. Do the above
modifications to the input array in place and do not return anything.
*/

//Time Complexity: O(n)
//Space Complexity: O(1)

#include <iostream>
using namespace std;

void duplicateTwos(int arr[], int n) {
    int possibleDups = 0;   // count extra space needed
    int last = n - 1;       // last index

    // count duplicable 2s within limit
    for (int i = 0; i <= last - possibleDups; i++) {
        if (arr[i] == 2) {
            if (i == last - possibleDups) { // boundary case
                arr[last] = 2;
                last--;
                break;
            }
            possibleDups++;
        }
    }

    // fill from end
    int i = last - possibleDups;
    for (; i >= 0; i--) {
        if (arr[i] == 2) {
            arr[i + possibleDups] = 2;
            possibleDups--;
            arr[i + possibleDups] = 2;
        } else {
            arr[i + possibleDups] = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    duplicateTwos(arr, n);

    // print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
