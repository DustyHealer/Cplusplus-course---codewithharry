#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

// This will not swap a and b
void swap(int a, int b) // 4,5
{
    int temp = a; // 4
    a = b;        // 5
    b = temp;     // 4
}

// Call by reference using pointers
void swapPointer(int *a, int *b) // 4,5
{
    int temp = *a; // 4
    *a = *b;       // 5
    *b = temp;     // 4
}

// Call by reference using c++ reference variables
int & swapRefenceVar(int &a, int &b) // 4,5
{
    int temp = a; // 4
    a = b;        // 5
    b = temp;     // 4
    return a;
}

int main()
{
    int x = 4, y = 5;
    cout << "The sum of x is " << x << " and y is " << y << endl;
    // swap(x, y); This will not swap a and b
    // swapPointer(&x, &y);// This will swap a and b using pointers
    swapRefenceVar(x, y);
    // swapRefenceVar(x, y) = 766;
    cout << "The sum of x is " << x << " and y is " << y << endl;
    return 0;
}
