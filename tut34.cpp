#include <iostream>
using namespace std;

// Copy Constructor
class Number
{
    int a;

public:
    Number(void) { a = 0; }
    Number(int num)
    {
        a = num;
    }
    // Copy Constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor Called !!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    // x.display();
    //  y.display();
    z.display();

    Number z2(x);
    z2.display();

    Number z1(z); // Copy Constructor Invoked
    z1.display();
    z2 = z; // Copy constructor not invoked
    return 0;
}

/*
    1. When No copy constructor is found, compiler supplies its own copy constructor
*/