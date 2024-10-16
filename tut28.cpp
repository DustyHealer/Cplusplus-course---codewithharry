#include <iostream>
using namespace std;

// Forward declaration for the friend function in class X
class Y;

class X
{
    int data;
    friend void add(X o1, Y o2);

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X o1, Y o2);

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing the data from X and Y gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);
    
    add(a1, b1);
    
    return 0;
}