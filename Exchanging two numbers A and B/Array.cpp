#include <iostream>

using namespace std;

int main() {
    int arr[2];

    cout << "Enter the value of A: ";
    cin >> arr[0];
    cout << "Enter the value of B: ";
    cin >> arr[1];

    cout << "Before swapping:" << endl;
    cout << "A = " << arr[0] << ", B = " << arr[1] << endl;

    // Swapping using array elements
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    cout << "After swapping:" << endl;
    cout << "A = " << arr[0] << ", B = " << arr[1] << endl;

    return 0;
}
