/*
Q1: Develop a menu-driven program to demonstrate the following operations on Arrays:
1. CREATE
2. DISPLAY
3. INSERT
4. DELETE
5. LINEAR SEARCH
6. EXIT
*/

#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100]; // Array to hold elements
    int size;     // Current size of the array

public:
    ArrayOperations() : size(0) {} // Constructor initializes size

    void create() {
        cout << "Enter number of elements: ";
        cin >> size; // Input size
        cout << "Enter elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i]; // Input elements
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " "; // Display elements
        }
        cout << endl;
    }

    void insert() {
        if (size >= 100) {
            cout << "Array is full!\n"; // Check for full array
            return;
        }
        int element, pos;
        cout << "Enter element to insert: ";
        cin >> element; // Input element to insert
        cout << "Enter position (0 to " << size << "): ";
        cin >> pos; // Input position
        if (pos < 0 || pos > size) {
            cout << "Invalid position!\n"; // Validate position
            return;
        }
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1]; // Shift elements
        }
        arr[pos] = element; // Insert element
        size++; // Increase size
    }

    void deleteElement() {
        if (size == 0) {
            cout << "Array is empty!\n"; // Check for empty array
            return;
        }
        int pos;
        cout << "Enter position to delete (0 to " << size - 1 << "): ";
        cin >> pos; // Input position to delete
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!\n"; // Validate position
            return;
        }
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Shift elements left
        }
        size--; // Decrease size
    }

    void linearSearch() {
        int element;
        cout << "Enter element to search: ";
        cin >> element; // Input element to search
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                cout << "Element found at index " << i << endl; // Found
                return;
            }
        }
        cout << "Element not found!\n"; // Not found
    }
};

int main() {
    ArrayOperations arrayOps; // Create object
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice; // Input choice

        switch (choice) {
            case 1: arrayOps.create(); break; // Create array
            case 2: arrayOps.display(); break; // Display array
            case 3: arrayOps.insert(); break; // Insert element
            case 4: arrayOps.deleteElement(); break; // Delete element
            case 5: arrayOps.linearSearch(); break; // Search element
            case 6: cout << "Exiting...\n"; break; // Exit
            default: cout << "Invalid choice! Try again.\n"; break; // Invalid choice
        }
    } while (choice != 6); // Loop until exit

    return 0;
}
