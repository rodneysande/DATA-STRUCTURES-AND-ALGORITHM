// Program showing insertion and deletion of arrays
/*
Name : Craig Nginga
Reg No: BSE-05-0209/2024
Group : 3
Github username: Craig631
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

// Function to display elements of the array
void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specific position
void insertElement(int arr[], int& size, int value, int position) {
    if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert element.\n";
        return;
    }
    if (position < 0 || position > size) {
        cout << "Error: Invalid position.\n";
        return;
    }

    // Shift elements to the right to make space
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[position] = value;
    size++;

    cout << "Inserted " << value << " at position " << position << ".\n";
}

// Function to delete an element from a specific position
void deleteElement(int arr[], int& size, int position) {
    if (size == 0) {
        cout << "Array is empty. Cannot delete element.\n";
        return;
    }
    if (position < 0 || position >= size) {
        cout << "Error: Invalid position.\n";
        return;
    }

    // Shift elements to the left to fill the gap
    cout << "Deleted " << arr[position] << " from position " << position << ".\n";
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; // Initial array
    int size = 5; // Current number of elements

    cout << "Initial Array: \n";
    displayArray(arr, size);

    // Insertion example
    cout << "\nInserting 25 at position 2: \n";
    insertElement(arr, size, 25, 2); // Insert 25 at index 2
    displayArray(arr, size);

    // Deletion example
    cout << "\nDeleting element at position 4: \n";
    deleteElement(arr, size, 4); // Delete element at index 4
    displayArray(arr, size);

    return 0;
}
