/*
 * Purpose: Implements the push operation to add an element to the top of a stack.
 * Programmer: Sophy Naliaka
 * AdmNo: BSE-05-0183/2024
 * Date: June 18, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5 // Maximum stack size

// push - Adds an element to the top of the stack.

void push(int stack[], int *top, int maxSize, int value) {
    if (*top >= maxSize - 1) {
        printf("Stack overflow: Cannot push, stack is full.\n");
        return;
    }
    stack[++(*top)] = value;
    printf("Pushed %d to the stack.\n", value);
}

// Entry point to demonstrate push operation.

int main() {
    int stack[MAX_SIZE];
    int top = -1; // Initialize top to -1 (empty stack)
    push(stack, &top, MAX_SIZE, 10);
    push(stack, &top, MAX_SIZE, 20);
    printf("Top index after pushes: %d\n", top);
    return 0;
}