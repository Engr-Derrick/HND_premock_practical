#include <iostream>

using namespace std;

int main() {
    int A, B;

    cout << "Enter the value of A: ";
    cin >> A;
    cout << "Enter the value of B: ";
    cin >> B;

    cout << "Before swapping:" << endl;
    cout << "A = " << A << ", B = " << B << endl;

    // Swapping using pointers
    int *pA = &A;
    int *pB = &B;
    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    cout << "After swapping:" << endl;
    cout << "A = " << A << ", B = " << B << endl;

    return 0;
}
