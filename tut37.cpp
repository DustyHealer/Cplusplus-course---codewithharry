#include <iostream>
using namespace std;

// Inheritance
class Employee // Base Class
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class Syntax
/*
class {{derived-class-name}} : {{visilility-mode}} {{base-class-name}}
{
    class members/ methods etc
}
*/

// Creating a class Programmer derived from Employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << "Harry Salary: " << harry.salary << endl;
    cout << "Rohan Salary: " << rohan.salary << endl;
    Programmer skillF(10);
    skillF.getData();
    cout << skillF.id << endl; // public visibility mode
    return 0;
}

/*
    1. Default visibility mode is Private. Options are public/private
    2. Private visibility mode: Public members of the base class becomes private members of the derived class.
    3. Public visibility mode: Public members of the base class becomes public members of the derived class.
    4. Private members of the base class are never inherited.
*/