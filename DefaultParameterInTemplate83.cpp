#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class dube
{
public:
    T1 a;
    T2 b;
    T3 c;
    dube(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
        cout << "value of c is " << c << endl;
    }
};
int main()
{
    dube<> h(4, 5.9,'s');
    h.display();
    cout<<endl;
    dube<float, char, char> g(1.6, 'o', 'c');
    g.display();

    return 0;
}