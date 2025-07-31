// Program demonstrating how to push and pop elements in a stack of exactly 6 elements
/*
Name  : Craig Nginga
Reg No  : BSE-05-0209/2024
Group : 3
Github username:Craig631
*/

#include <iostream>
#include <stack>

using namespace std;

const int MAX_SIZE = 6; // Stack size limit

// Function to display the stack (without modifying original stack)
void displayStack(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Current stack (top to bottom): ";
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
}

int main() {
    stack<int> myStack;

    // Push 6 elements
    cout << "\nPushing 6 elements into the stack: \n";
    for (int i = 1; i <= MAX_SIZE; i++) {
        myStack.push(i * 10); 
        cout << "Pushed: " << i * 10 << endl;
    }

    // Try to push a 7th element
    cout << "\nTrying to push a 7th element (70): \n";
    if (myStack.size() >= MAX_SIZE) {
        cout << "\nStack Overflow! Cannot push 70, stack is full! \n";
    } else {
        myStack.push(70);
        cout << "Pushed: 70" << endl;
    }

    // Display stack
    cout << "\nDisplaying stack after pushing \n";
    displayStack(myStack);

    // Pop one element
    cout << "\nPopping one element from the stack: \n";
    if (!myStack.empty()) {
        cout << "Popped: " << myStack.top() << endl;
        myStack.pop();
    } else {
        cout << "\nStack Underflow! Cannot pop, stack is empty! \n";
    }

    // Display stack after pop
    cout << "\nDisplaying stack after popping: \n";
    displayStack(myStack);

    return 0;
}
