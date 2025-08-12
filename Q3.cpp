/*
Q3: Predict the output of the following program:

int main() {
    int i;
    int arr[5] = {1};
    for (i = 0; i < 5; i++)
        printf("%d", arr[i]);
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1};
    
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i];
    }
    
    return 0;
}

/*
Expected Output:
10000

Explanation:
1. The array 'arr' is initialized with the first element as 1 and the rest as 0.
2. The for loop iterates through the array and prints each element sequentially.
3. Therefore, the output will be "10000".
*/
