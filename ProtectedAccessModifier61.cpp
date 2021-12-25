#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};
class derived : protected base
{
};
/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/
int main()
{
    derived d;
    base b;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}