#include <iostream>
using namespace std;

int main()
{
    /*
        Loops in C++
        There are three types of loops in C++:
        1. For loop
        2. While loop
        3. Do-while loop
    */

    // for(int i = 0; i < 4; i++)
    // {
    //     cout << i << endl;
    // }

    // Example of infinite for loop
    // for(int i=1; 34<=40; i++)
    // {
    //     cout << i << endl;
    // }

    // While loop in c++
    // while(conditional)
    // {
    //     // code
    // }

    // int i = 1;
    // while (i <= 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Do While loop in c++
    // do
    // {
    //     // code
    // }while(conditional);

    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (false);

    const int table = 6;
    int i = 1;
    do
    {
        cout << table << " * " << i << " = " << table * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}