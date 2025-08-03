/*
 * Purpose: Delets an element at a specified index in an array.
 * Programmer: RODNEY VALENCIA SANDE
 * AdmNo: BSE-01-0212/2024
 * Date: June 18, 2025
 */
#include <stdio.h>

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Initialize an array with some elements
    int size = 5; // Current number of elements in the array
    int positionToDelete; // Variable to store the position to delete

    printf("Original ");
    displayArray(arr, size);

    // --- Deletion Process ---

    printf("Enter the position (0-indexed) to delete: ");
    scanf("%d", &positionToDelete);

    // Check if the position is valid
    if (positionToDelete < 0 || positionToDelete >= size) {
        printf("Invalid position for deletion. Please enter a position within the array bounds.\n");
    } else {
        // Shift elements to the left to fill the gap created by deletion
        for (int i = positionToDelete; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array after deletion
        size--;

        printf("Array after deletion: ");
        displayArray(arr, size);
    }

    return 0;

}
