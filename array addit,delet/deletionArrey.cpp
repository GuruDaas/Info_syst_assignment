#include<iostream>
using namespace std;

int main(){

const int MAX_SIZE = 100;
int arr[MAX_SIZE];
int size, pos;

cout<<"Enter the size of the array: ";
cin>>size;

cout<<"Enter "<< size << " element of the size array:\n";
for(int i=0; i<size; i++){
    cin>> arr[i];
}

cout << "Enter the position of the element to delete(1 to "<<size << "):";
cin>>pos;

if(pos < 1 ||  pos > size){
   cout<<"Invalid positon! Plese enter position between 1 and "<< size << ".\n";
}
else{
    for(int i = pos -1; i < size -1; i++){
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "Array after deletion:\n";
    for(int i = 0; i < size; i++);
}    
cout << endl;
    return 0;
}