#include <iostream>
using namespace std;

class Stack {
private:
    int top;         // Index of the top element
    int capacity;    // Maximum size of the stack
    int* stackArray; // Array to store stack elements

public:
    // Constructor to initialize the stack
    Stack(int size) {
        capacity = size;
        stackArray = new int[capacity];
        top = -1; // Stack is initially empty
    }

    // Destructor to free the allocated memory
    ~Stack() {
        delete[] stackArray;
    }

    // Method to add an element to the stack
    void push(int item) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << item << endl;
            return;
        }
        stackArray[++top] = item;
        cout << "Pushed " << item << " onto the stack." << endl;
    }

    // Method to remove and return the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! No elements to pop." << endl;
            return -1; // Indicates an error
        }
        return stackArray[top--];
    }

    // Method to return the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! No elements to peek." << endl;
            return -1; // Indicates an error
        }
        return stackArray[top];
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Method to check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Method to display all elements in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

// // Example usage
int main() {
    Stack stack(5);  // Create a stack with a capacity of 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);

    stack.display();    // Output: Stack elements: 10 20 30

    cout << "Top element: " << stack.peek() << endl;  // Output: Top element: 30

    stack.pop();
    stack.display();    // Output: Stack elements: 10 20
    return 0;
}

