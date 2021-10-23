#include <iostream>
using namespace std;

class point
{
    int a, b;

public:
    point(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
point ::point(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    point a(3, 9);
    point b = point(5, 6);
    a.printNumber();
    b.printNumber();
    return 0;
}