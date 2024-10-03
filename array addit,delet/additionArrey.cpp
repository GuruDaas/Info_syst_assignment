#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;  
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7 };  
    int n = 7; 
    int position = 4;  

    if (position >= n || position < 0) {
        cout << "Invalid position." << endl;
    } 
    else {
        
        for (int i = position; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        n--;
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
