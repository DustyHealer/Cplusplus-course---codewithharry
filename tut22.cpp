#include <iostream>
#include <string>
using namespace std;

// Declaring objects along with the class
// class Employee
// {
//     // Class Definition
// } himanshu, shubham;

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary ::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // OOPS - Classes and Objects
    // C++ -> Intially called as C with classes by Stroustroup
    // Class -> Extension of structures (in C)
    // Structures had limitations -> Members are public, cannot add methods
    // Classes = structures + more
    // Classes can have methods and properties
    // Classes can make few members are public or private
    // Structures in c++ are type defed by default
    // You can declare objects along with the class declaration

    // Nesting of Member functions
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}