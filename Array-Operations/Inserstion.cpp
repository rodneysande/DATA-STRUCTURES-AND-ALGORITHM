/*
 * Purpose: Inserts an element at a specified index in an array.
 * Programmer: Sophy Naliaka
 * AdmNo: BSE-05-0183/2024
 * Date: June 18, 2025
 */

#include <stdio.h>

//insert - Inserts a value at the specified index, shifting elements right.
 
void insert(int arr[], int *size, int maxSize, int index, int value) {
    if (*size >= maxSize) {
        printf("Array overflow: Cannot insert, array is full.\n");
        return;
    }
    if (index < 0 || index > *size) {
        printf("Invalid index: Must be between 0 and %d.\n", *size);
        return;
    }
    for (int i = *size - 1; i >= index; i--) {
        arr[i + 1] = arr[i]; // Shift elements right
    }
    arr[index] = value;
    (*size)++; // Increment size
    printf("Inserted %d at index %d.\n", value, index);
}

//Entry point to demonstrate insert function.

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5, maxSize = 10;
    insert(arr, &size, maxSize, 2, 10);

    return 0;
}