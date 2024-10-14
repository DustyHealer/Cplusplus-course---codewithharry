#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} emp;

union money
{
    int rice;     // 4 Byte
    char car;     // 1 Byte
    float pounds; // 4 Byte

    // Incase of struct total memory used = 4+1+4=9
    // Incase of union total memory used = 4
};

int main()
{
    // Structs

    // emp harry;
    // struct employee himanshu; // We can create
    // struct employee shubham;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 1200000;
    // cout << "The value is " << harry.eId << endl;
    // cout << "The value is " << harry.favChar << endl;
    // cout << "The value is " << harry.salary << endl;

    // Union

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'a';
    // cout << m1.rice << endl;
    // cout << m1.car << endl; // We can use only one at a time

    // Enum
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    Meal m1 = lunch;
    cout << m1 << endl;

    return 0;
}