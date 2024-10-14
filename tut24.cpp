#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Static variable is class variable and it is common for all the objects of the class

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this Employee is: " << id << " and this is employee number: " << count << endl;
    }
    static void getCount(void)
    {
        // cout << id; // Throws an error, static method can only access static members
        cout << "The value of count is: " << count << endl;
    }
};

// Static variable have to be declared outside class like below
int Employee::count = 1000; // Default value is zero, Initialization can be done only outside the class

int main()
{
    Employee himanshu, harry, shubham;
    // Below Private Members are inaccessible
    // himanshu.id = 1;
    // himanshu.count = 1;

    himanshu.setData();
    himanshu.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();

    shubham.setData();
    shubham.getData();
    Employee::getCount();

    return 0;
}
