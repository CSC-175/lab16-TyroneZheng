#include <iostream>
using namespace std;

// Recursive function to find the GCF using the Euclidean Algorithm
int gcf(int A, int B) {
    if (B == 0) {
        return A; // Base case: when B is 0, return A as the GCF
    } else {
        return gcf(B, A % B); // Recursive call with B and the remainder of A divided by B
    }
}

int main() {
    int A, B;
    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> A >> B;

    // Calculate and display the GCF
    cout << "The greatest common factor of " << A << " and " << B << " is " << gcf(A, B) << endl;

    return 0;
}
