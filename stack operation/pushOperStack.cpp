#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[6];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 6; i++)
        {
            arr[i] = 0;
        }
    }

    bool isFull()
    {
        return top == 5;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow! Cannot push " << value << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    // Function to display the stack
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "The push element : ";
    s.push(60);
    s.display();

    return 0;
}
