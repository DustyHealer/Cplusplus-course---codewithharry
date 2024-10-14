
// There are two types of header files
// 1. System header files: It comes with the compiler.
#include <iostream>
// 2. User-Defined header files: It is written by the programmer.
// #include <this.h> // This will produce an error if this.h is not present in current directory

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++:" << endl;
    // Arithmetic operators: +, -, *, /, % (modulus) ... etc.
    cout << "The value of a+b is " << a+b << endl;
    cout << "The value of a-b is " << a-b << endl;
    cout << "The value of a*b is " << a*b << endl;
    cout << "The value of a/b is " << a/b << endl;
    cout << "The value of a%b is " << a%b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    // Assignment Operators: =, +=, -=, *=, /=, %= ... etc.
    // int a = 3, b=9;
    // char c = 'd';

    // Comparison Operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << endl;

    // Logical Operators: &&, ||, ! ... etc.
    cout << "The value of logical AND operator (a==b) && (a<b) is:" << ((a==b) && (a<b)) << endl;
    cout << "The value of logical OR operator (a==b) || (a<b) is:" << ((a==b) || (a<b)) << endl;
    cout << "The value of logical NOT operator !(a==b) is:" << (!(a==b)) << endl;

    // Bitwise Operators: &, |, ^, ~, <<, >> ... etc.
    return 0;
}
