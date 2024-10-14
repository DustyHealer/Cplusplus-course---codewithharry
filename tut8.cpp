#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of a was " << a << endl;
    // a = 45;
    // cout << "The value of a is " << a << endl;

    // Constants in C++
    // const int a = 3;
    // a = 34; // You will get an error because you cannot change a constant value

    // ************Manipulators in C++*************
    // int a = 3, b = 78, c = 1223;
    // cout << "The value of a is " << setw(4) << a << endl;
    // cout << "The value of b is " << setw(4) << b << endl;
    // cout << "The value of c is " << setw(4) << c << endl;

    // Operator Precedence
    int a = 3, b = 4;
    // int c = (a * 5) + b;
    int c = ((((a *5)+b)-45)+87); // Check en operator precedence table for more information
    return 0;
}
