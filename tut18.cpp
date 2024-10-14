#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

// In this case recursion is not better than iteration
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}

int main()
{
    // Factorial of a number
    // 6! = 6x5x4x3x2x1 = 720
    // 0! = 1
    // 1! = 1
    // n! = n x (n-1)!

    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    // cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "The Term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}