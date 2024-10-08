#include <iostream>
#include <vector>
using namespace std;

// Function to add two polynomials
void addPolynomials(int P1[], int P2[], int result[], int maxDegree) {
    for (int i = 0; i <= maxDegree; i++) {
        result[i] = P1[i] + P2[i];
    }
}

int main() {
    // Maximum degree of the polynomials
    int maxDegree = 3;

    // Initialize the polynomials (coefficients from lowest to highest degree)
    int P1[] = {6, 5, 3, 0};  // P1(x) = 3x^2 + 5x + 6
    int P2[] = {1, 7, 2, 4};  // P2(x) = 4x^3 + 2x^2 + 7x + 1

    // Array to store the result
    int result[4] = {0};

    // Adding the polynomials
    addPolynomials(P1, P2, result, maxDegree);

    // Output the result
    cout << "Resultant polynomial after addition: ";
    for (int i = maxDegree; i >= 0; i--) {
        if (result[i] != 0) {
            cout << result[i] << "x^" << i;
            if (i != 0) cout << " + ";
        }
    }
    cout << endl;

    return 0;
}