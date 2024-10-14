#include <iostream>
using namespace std;

// Inline Functions -  It replace the function call with the actual function code
// It might be helpful when we make multiple method calls. It will prevent creating the temp vatiables
int product(int a, int b)
{
    // When we have static variables, dont use inline functions
    // When we have loops or conditionals statements, dont use inline functions
    // static int c = 0;
    // c++;
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// const makes sure that char is not changed inside the method
int strlen(const char *p)
{

}

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b: " << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after one year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after one year" << endl;
    return 0;
}
