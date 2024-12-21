#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    cout << "Enter the value of A: ";
    cin >> A;
    cout << "Enter the value of B: ";
    cin >> B;

    cout << "Before swapping:" << endl;
    cout << "A = " << A << ", B = " << B << endl;

    swap(&A, &B); // Pass addresses of A and B to swap function

    cout << "After swapping:" << endl;
    cout << "A = " << A << ", B = " << B << endl;

    return 0;
}
