#include <iostream>
#include <iomanip>
using namespace std;

int a = 98;
int main()
{
    const int a = 10;
    float x = 45.22f;
    cout << a << " " << ::a << endl;
    cout << int(x) << endl;
    cout << float(x) << endl;

    int p = 6, u = 99, t = 4444;
    cout << setw(4) << p << endl;
    cout << setw(4) << u << endl;
    cout << setw(4) << t << endl;

    return 0;
}
