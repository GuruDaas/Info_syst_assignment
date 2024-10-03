#include <iostream>
#include <vector>
using namespace std;

// Function to subtract two polynomials
vector<int> subtractPolynomials(const vector<int>& poly1, const vector<int>& poly2) {
    int size1 = poly1.size();
    int size2 = poly2.size();
    int maxSize = max(size1, size2);
    
    // Create a result vector with all coefficients initialized to zero
    vector<int> result(maxSize, 0);
    
    // Subtract the coefficients of the two polynomials
    for (int i = 0; i < size1; i++) {
        result[i] = poly1[i];
    }
    for (int i = 0; i < size2; i++) {
        result[i] -= poly2[i];
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(const vector<int>& poly) {
    bool isFirst = true;
    for (int i = poly.size() - 1; i >= 0; i--) {
        if (poly[i] != 0) {
            if (!isFirst && poly[i] > 0) {
                cout << " + ";
            }
            else if (poly[i] < 0) {
                cout << " - ";
                if (i != poly.size() - 1) cout << -poly[i];
            }
            else if (i != poly.size() - 1) {
                cout << " ";
            }

            if (poly[i] != 1 || i == 0) {
                cout << abs(poly[i]);
            }
            if (i > 0) {
                cout << "x";
                if (i > 1) {
                    cout << "^" << i;
                }
            }
            isFirst = false;
        }
    }
    if (isFirst) {
        cout << "0";  // If no terms, the polynomial is zero
    }
    cout << endl;
}

int main() {
    // Example polynomials P(x) = 5x^3 + 4x^2 + 2x + 1 and Q(x) = 3x^3 + 0x^2 + 1x + 4
    vector<int> poly1 = {1, 2, 4, 5};  // Coefficients of P(x)
    vector<int> poly2 = {4, 1, 0, 3};  // Coefficients of Q(x)

    cout << "First Polynomial: ";
    displayPolynomial(poly1);

    cout << "Second Polynomial: ";
    displayPolynomial(poly2);

    // Subtract the two polynomials
    vector<int> result = subtractPolynomials(poly1, poly2);

    // Display the result of subtraction
    cout << "Result after subtraction: ";
    displayPolynomial(result);

    return 0;
}
