#include <iostream>
using namespace std;

// This is a function prototype
// type function-name (arguments)
// int sum(int a, int b); // Acceptable
// int sum(int a, b); // UnAcceptable
int sum(int, int); // Acceptable
// void greet(); // Acceptable
void greet(void); // Acceptable
// void g(void); // UnAcceptable

int main()
{
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    // num1, num2 = Actual Parameters
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
    greet();
    return 0;
}

// This is a function
int sum(int a, int b)
{
    // a,b = formal parameters
    int c = a + b;
    return c;
}

void greet()
{
    cout << "Good Morning! Himanshu Boss !!" << endl;
}