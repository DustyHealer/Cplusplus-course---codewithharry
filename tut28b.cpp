#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &x, c2 &y);

public:
    void indata(int a)
    {
        val1 = a;
    }
    int display(void)
    {
        return val1;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &x, c2 &y);

public:
    void indata(int a)
    {
        val2 = a;
    }
    int display(void)
    {
        return val2;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);
    cout << "The value of c1 after exchanging becomes " << oc1.display() << endl;
    cout << "The value of c2 after exchanging becomes " << oc2.display() << endl;
    return 0;
}