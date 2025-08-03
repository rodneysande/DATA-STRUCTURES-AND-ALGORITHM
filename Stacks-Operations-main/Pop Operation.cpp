/*
 * Purpose: Implements the pop operation to remove and return the top element.
 * Programmer: Sophy Naliaka
 * AdmNo: BSE-05-0183/2024
 * Date: June 18, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5

// pop - Removes and returns the top element from the stack.
 
int pop(int stack[], int *top) {
    if (*top < 0) {
        printf("Stack underflow: Cannot pop, stack is empty.\n");
        return -1;
    }
    int value = stack[(*top)--];
    printf("Popped %d from the stack.\n", value);
    return value;
}

// Entry point to demonstrate pop operation.
 
int main() {
    int stack[MAX_SIZE] = {10, 20, 30};
    int top = 2; // Stack with 3 elements
    pop(stack, &top);
    printf("Top index after pop: %d\n", top);
    return 0;
}