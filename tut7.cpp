#include <iostream>
using namespace std;

int c = 45;

int main(int argc, char const *argv[])
{
    // ****************Built in data types***********************
    // int a, b, c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is " << c << endl;
    // // :: is scope resolution operator
    // cout << "The global c is " << ::c;

    // ****************Float, Double and Long Double litrals***********************

    // float d = 34.4f;
    // long double e = 34.4;

    // By default 34.4 is considered as double, to tell compiler it is a float we use 34.4f
    // Similarly, l is long double we use 34.4l

    // cout << "The values of d is: " << d << endl;
    // cout << "The values of e is: " << e << endl;

    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4 is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4 is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4 is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4 is " << sizeof(34.4L) << endl;

    // ************Reference Variables***********
    // float x = 455;
    // float & y = x; // y is a reference variable which refers to the value of x
    // cout << x << endl;
    // cout << y << endl;

    // ************Typecasting***********
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of b is " << (int)b << endl;

    cout << "The expression is " << (a + b) << endl;
    cout << "The expression is " << (a + int(b)) << endl;
    cout << "The expression is " << (a + (int)b) << endl;

    return 0;
}
