#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[5];  // Fixed size array for the stack

public:
    Stack() {
        top = -1;  // Initialize stack as empty
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == 4;  // Max index in array of size 5
    }

    // Push an element onto the stack
    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            arr[top] = val;
        }
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return 0;
        } else {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    // Display the elements of the stack
    void display() {
        cout << "Stack elements are: " << endl;
        for (int i = 4; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }

    // Peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    cout << "Popped element: " << s.pop() << endl;
    cout << "Top element after pop: " << s.peek() << endl;

    s.display();

    return 0;
}

