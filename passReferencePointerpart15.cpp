#include <iostream>
using namespace std;

void passbyvalue(int x);
void passbyreferench(int *x);
int main()
{
    int a = 5;
    int b = 5;
    passbyvalue(a);
    passbyreferench(&b);

    cout << "a is now = " << a << endl;
    cout << "b is now = " << b << endl;

    return 0;
}
void passbyvalue(int x)
{
    x = 99;
}
void passbyreferench(int *x)
{
    *x = 65;
}