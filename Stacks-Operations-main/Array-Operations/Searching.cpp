/*
 * Purpose: Searches for an element by index or value in an array.
 * Programmer: RODNEY VALENCIA SANDE
 * AdmNo: BSE-01-0212/2024
 * Date: June 18, 2025
 */

#include <stdio.h>

//search - Searches for an element by index or value in the array.

int search(int arr[], int size, int target, int byIndex) {
    if (byIndex) { // Search by index
        if (target < 0 || target >= size) {
            printf("Invalid index: Must be between 0 and %d.\n", size - 1);
            return -1;
        }
        return arr[target];
    } else { // Search by value
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                printf("Element %d found at index %d.\n", target, i);
                return i;
            }
        }
        printf("Element %d not found.\n", target);
        return -1;
    }
}

// Entry point to demonstrate search function.
 
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("Search by index 2: %d\n", search(arr, size, 2, 1)); // By index
    printf("Search by value 4: ");
    search(arr, size, 4, 0); // By value
    return 0;
}
