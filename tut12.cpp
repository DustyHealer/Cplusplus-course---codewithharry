#include <iostream>
using namespace std;

int main()
{
    // What is a pointer?
    // Pointer is a datatype which holds the address of other variables or data types.

    int a = 3;
    int *b = &a; // & ---> Address of operator

    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // Experiment
    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // c is a pointer to a pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value of address (address c) is " << **c << endl;
    return 0;
}