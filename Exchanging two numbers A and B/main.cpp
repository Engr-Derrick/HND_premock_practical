#include <iostream>

using namespace std;

int main()
{


    int A,B, temp;

    cout<< "Enter the value of A:";
    cin>> A;
    cout<< "Enter the value of B:";
    cin>> B;

    cout<< "Before swapping:" <<endl;
    cout<< "A=" <<A<< ",B=" <<B<< endl;

    //swappping using a temporary variable
    temp=A;
    A=B;
    B=temp;
    cout<< "After swapping:"<< endl;
    cout<< "A="<<A <<",B="<<B<< endl;


    return 0;
}
