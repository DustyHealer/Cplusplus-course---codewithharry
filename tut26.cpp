#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Friend Function - Declaration
    // This is not a member function. Complex class object can't access this method
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Friend Function - Body
Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    // Can access class private data members
    c3.setNumber(c1.a + c2.a, c1.b + c2.b);
    return c3;
}

int main()
{
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    c1.printNumber();
    c2.printNumber();

    Complex sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*
    Properties of friend functions
    1. Not in the scope of class.
    2. Since it is not in the scope of the class, it can't be called
    from the object of the class i.e c1.sumComplex == Invalid.
    3. Can be invoked without the help of object.
    4. Usually contains objects as arguments.
    5. Can be declared inside public or private section of the class.
    6. It can't access the members directly from their names and need
    object_name.member_name to access any member.
*/