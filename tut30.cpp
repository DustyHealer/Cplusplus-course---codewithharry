#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Parameterized Constructor - It accepts parameters
Complex ::Complex(int x, int y)
{
    cout << "Inside Constructor" << endl;
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex a(4, 6);

    // Explicit Call
    Complex b = Complex(4, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}
