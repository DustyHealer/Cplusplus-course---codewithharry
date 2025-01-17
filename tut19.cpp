#include <iostream>
using namespace std;

// Function overloading
int add(int a, int b)
{
    // cout << "Using Function with two arguments" << endl;
    return a + b;
}

int add(int a, int b, int c)
{
    // cout << "Using Function with three arguments" << endl;
    return a + b + c;
}

// Volume of a cylinder
int volume(double r, int h)
{
    return 3.14 * r * r * h;
}

// Volume of a cube
int volume(int a)
{
    return a * a * a;
}

// Volume of a rectangular box
int volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout << "The sum of 3 and 6 is " << add(3, 6) << endl;
    cout << "The sum of 3, 6 and 7 is " << add(3, 6, 7) << endl;
    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3, and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;
    return 0;
}
