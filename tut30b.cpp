#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;
    friend float calculateDistance(Point p1, Point p2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

// Function to compute distance between two points
float calculateDistance(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main()
{
    Point p1 = Point(0, 7);
    p1.displayPoint();

    Point p2 = Point(0, 1);
    p2.displayPoint();

    cout << "The distance between p1 and p2 is " << calculateDistance(p1, p2) << endl;
    return 0;
}
