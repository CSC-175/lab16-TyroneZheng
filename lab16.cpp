#include <iostream>
using namespace std;

// Recursive function to calculate the GCF
int gcf(int A, int B) {
    if (B == 0) {
        return A;  // Base case: GCF(A, 0) = A
    }
    return gcf(B, A % B);  // Recursive case: GCF(A, B) = GCF(B, A % B)
}

int main() {
    int A, B;

    // Take input from the user
    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> A >> B;

    // Output the GCF
    cout << "The greatest common factor of " << A << " and " << B << " is " << gcf(A, B) << endl;

    return 0;
}
// Code to implement the gcf function goes here
