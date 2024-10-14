#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    // << is called insertion operator
    cout << "Enter the value of Num1:\n";
    // >> is called extraction operator
    cin >> num1;

    // << is called insertion operator
    cout << "Enter the value of Num2:\n";
    // >> is called extraction operator
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    return 0;
}
