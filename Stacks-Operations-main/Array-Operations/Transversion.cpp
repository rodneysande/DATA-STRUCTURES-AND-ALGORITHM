/*
 *Purpose: Traverses and prints all elements of an array.
 * Programmer: RODNEY VALENCIA SANDE
 * AdmNo: BSE-01-0212/2024
 * Date: June 18, 2025
 */

/* Required header for input/output operations */
#include <stdio.h>

// Traverse:Prints all elements of the array sequentially.

void traverse(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Entry point to demonstrate traverse function.
 
int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Fixed-size array with initial values
    int size = 5;                   // Current number of elements
    traverse(arr, size);
    return 0;
}
