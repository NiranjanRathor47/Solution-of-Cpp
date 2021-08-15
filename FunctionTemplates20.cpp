#include <iostream>
using namespace std;

template <class dev>
dev add(dev a, dev b)
{
    return a + b;
}
int main()
{
    double x = 9.24, y = 87.1, z;
    z = add(x, y);
    cout << z << endl;

    return 0;
}