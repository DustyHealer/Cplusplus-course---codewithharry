#include <iostream>
using namespace std;

// Constructor Overloading
class Complex
{
    int a, b;

public:
    // Default Constructor
    Complex()
    {
        a = 0;
        b = 0;
    }
    // Parameterized Constructor
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}
