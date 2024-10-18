#include <iostream>
using namespace std;

// Single Inheritance
class Base
{
    int data1; // Private by default, hence not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : private Base // Class is being derived privately
{
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    setData(); // Can be called inside the method since it is private member of derived class
    data3 = data2 * getData1();
}
void Derived::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setData(); // This will be a private member of the derived class
    der.process();
    der.display();
    return 0;
}
