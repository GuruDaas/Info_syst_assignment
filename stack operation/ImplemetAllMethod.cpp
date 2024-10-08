#include <iostream>
using namespace std;

#define MAX 1000 // Define the maximum size of the stack

class Stack {
    int top;      // Index of the top element
    int arr[MAX]; // Stack array to hold elements

public:
    Stack() { top = -1; } // Constructor to initialize the top to -1

    // Method to push (add) an element to the stack
    void push(int x) {
        if (top >= MAX - 1) {   // Check if the stack is full
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = x;     // Increment top and add the element
            cout << x << " pushed into stack\n";
        }
    }

    // Method to pop (remove) an element from the stack
    void pop() {
        if (top < 0) {          // Check if the stack is empty
            cout << "Stack Underflow\n";
        } else {
            int x = arr[top--]; // Remove the top element and decrement top
            cout << x << " popped from stack\n";
        }
    }

    // Method to display the top element without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        } else {
            return arr[top];    // Return the top element
        }
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Check if Empty\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Push operation
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2: // Pop operation
            s.pop();
            break;
        case 3: // Peek operation
            cout << "Top element is: " << s.peek() << endl;
            break;
        case 4: // Check if stack is empty
            if (s.isEmpty())
                cout << "Stack is Empty\n";
            else
                cout << "Stack is Not Empty\n";
            break;
        case 5: // Exit the program
            return 0;
        default:
            cout << "Invalid Choice\n";
        }
    }
}
