#include<iostream>
using namespace std;

int main(){
    const int MAX_SIZE = 50;
    int arr[MAX_SIZE];
    int n;

    cout << "enter the number of element in  the array: ";
    cin >> n;

    cout << "enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
int element;
cout << "enter the element you want to inseret: ";
cin >> element;

int position;
cout << "enter the index in which the inseret: ";
cin >> position;


if(position < 0 || position > n){
    cout << "Invalid position! position must be 0 and"  << n <<"." <<endl;
}
else{
    for(int i = n; i > position; --i){
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
}
cout << "Updated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

return 0;

}