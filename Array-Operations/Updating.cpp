/*
 * Purpose: Updates an element at a specified index in an array.
 * Programmer: Sophy Naliaka
 * AdmNo: BSE-05-0183/2024
 * Date: June 18, 2025
 */

#include <stdio.h>

// update - Replaces the element at the specified index with a new value.
 
void update(int arr[], int size, int index, int value) {
    if (index < 0 || index >= size) {
        printf("Invalid index: Must be between 0 and %d.\n", size - 1);
        return;
    }
    arr[index] = value;
    printf("Updated index %d with value %d.\n", index, value);
}

// Entry point to demonstrate update function.
 
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    update(arr, size, 2, 10);
    return 0;
}