#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void push(int val) {

   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      rear++;
      queue[rear] = val;
   }
}
void pop() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
while (true) {
    cout << "enter your choice" << endl;
    cout << "1 for adding element in stack" << endl;
    cout << "2 for deleting element into stack" << endl;
    cout << "3 for displaying stack  element" << endl;
    cout << "enter your choice option : ";
    int cho;
    cin >> cho;
    if (cho == 1) {
      int value;
      cout << endl;
      cout << "enetr a value to add in queue : ";
      cin >> value;
      push(value);
    }
    if (cho == 1) {
      int value;
      cout << "enetr a value to adding element in queue: ";
      cin >> value;
      push(value);
    } else if (cho == 2) {
      pop();
    } else if (cho == 3) {
      Display();
    } else {
      cout << "select between 1 to 3";
    }
  }
}