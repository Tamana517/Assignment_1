/*
Q1: Develop a menu-driven program to demonstrate the following operations on Arrays:
-----MENU-----
1. CREATE
2. DISPLAY
3. INSERT
4. DELETE
5. LINEAR SEARCH
6. EXIT
*/

#include <iostream>
using namespace std;

int arr[100]; // Array storage
int size = 0; // Current size

// Create array
void create() {
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Input each element
    }
}

// Display array
void display() {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements
    }
    cout << endl;
}

// Insert element at given position
void insertElement() {
    if (size >= 100) { // Check array capacity
        cout << "Array is full!\n";
        return;
    }
    int element, pos;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position (0 to " << size << "): ";
    cin >> pos;
    if (pos < 0 || pos > size) { // Validate position
        cout << "Invalid position!\n";
        return;
    }
    // Shift elements right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element; // Place element
    size++; // Increase size
}

// Delete element at given position
void deleteElement() {
    if (size == 0) { // Check if empty
        cout << "Array is empty!\n";
        return;
    }
    int pos;
    cout << "Enter position to delete (0 to " << size - 1 << "): ";
    cin >> pos;
    if (pos < 0 || pos >= size) { // Validate position
        cout << "Invalid position!\n";
        return;
    }
    // Shift elements left
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Decrease size
}

// Linear search for an element
void linearSearch() {
    int element;
    cout << "Enter element to search: ";
    cin >> element;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) { // Found match
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found!\n"; // No match
}

int main() {
    int choice;
    do {
        // Display menu
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform chosen operation
        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6); // Repeat until exit

    return 0;
}
