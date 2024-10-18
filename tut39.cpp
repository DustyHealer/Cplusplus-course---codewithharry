#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*
    For a protected member of the base class:
                                Public derivation   Private Derivation  Protected Derivation
    1. Private Members          Not Inherited       Not Inherited       Not Inherited
    2. Protected Members        Protected           Private             Protected
    3. Public Members           Public              Private             Protected
*/
class Derived : protected Base
{
};

int main()
{
    Base base;
    Derived der;
    // cout << der.a << endl; // This will not be accessible because a is protected in both the parent and derived class
    return 0;
}
