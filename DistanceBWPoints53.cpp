#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int a, b;
public:
    Point(int x, int y)
    {
         a = x;
         b = y;
    }
    void display()
    {
         cout << "The Point for the object is ( " << a << " , " << b <<")"<< endl;
    }
    friend float distance(Point p, Point q);
};
float distance(Point p, Point q)
{
    float res = sqrt((pow((p.a - q.a), 2)) + (pow((p.b - q.b), 2)));
    return res;
}
int main()
{
    Point p(3, 4);
    Point q(5, 6);
    p.display();
    q.display();
    cout << "The distance is " << distance(p, q);
}