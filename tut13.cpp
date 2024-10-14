#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];

    mathMarks[0] = 89;
    mathMarks[1] = 96;
    mathMarks[2] = 43;
    mathMarks[3] = 98;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << mathMarks[i] << endl;
    // }

    // Challenge - Print the array using while and do-while
    // int i = 0;
    // while(i < 4)
    // {
    //     cout << "The value of marks " << i << " is " << mathMarks[i] << endl;
    //     i++;
    // }

    // do
    // {
    //     cout << "The value of marks " << i << " is " << mathMarks[i] << endl;
    //     i++;
    // } while (i < 4);

    // Arrays and Pointers
    // Name of the array i.e marks will point to the address of the first element of the array
    int *p = marks;
    // cout << "The values of marks[0] = " << *p << endl;

    // Pointer Arithmetic
    // address new =  address current + i * sizeOf(data type);
    // cout << "The values of marks[1] = " << *(p + 1) << endl;
    // cout << "The values of marks[2] = " << *(p + 2) << endl;
    // cout << "The values of marks[3] = " << *(p + 3) << endl;
    cout << *(p++) << endl;
    cout << *(p) << endl;
    cout << *(++p) << endl;
    return 0;
}