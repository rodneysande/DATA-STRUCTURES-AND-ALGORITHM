/*
 * Purpose: Checks if the stack is empty.
 * Programmer: RODNEY VALENCIA SANDE
 * AdmNo: BSE-01-0212/2024
 * Date: June 18, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5

// isEmpty - Checks if the stack is empty.

int isEmpty(int top) {
    return (top < 0) ? 1 : 0;
}

// Entry point to demonstrate isEmpty operation.

int main() {
    int top = -1; // Empty stack
    printf("Is stack empty? %s\n", isEmpty(top) ? "Yes" : "No");
    top = 2;     // Non-empty stack
    printf("Is stack empty? %s\n", isEmpty(top) ? "Yes" : "No");
    return 0;
}
