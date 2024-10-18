#include <iostream>
using namespace std;

// Destructor
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is a time when constructor is called for object number: " << count << endl;
    }
    // Destructor = Tilde + classname
    ~num()
    {
        cout << "This is a time when destructor is called for object number: " << count << endl;
        count--;
    }
};

int main()
{
    cout << "Inside Main Function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering the block {}" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting the block {}" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}

/*
    Destructor never takes any arguments nor does it return any value
*/