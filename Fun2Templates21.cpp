#include <iostream>
using namespace std;

template <class first , class second>
first smaller(first a, second b)
{
    return (a<b?a:b);
}
int main()
{
    int x = 95;
    double  y = 87.45;
    cout << smaller(x,y)<< endl;

    return 0;
}