#include <iostream>
using namespace std;

class complex
{
    int a, b;
public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex sumcomplex(complex x, complex y);   //  important 
    void printnumber()
    {
        cout << "your complex num is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex x, complex y)
{
    complex z;
    z.setnumber((x.a + y.a), (x.b + y.b));
    return z;
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(3, 5);
    c1.printnumber();

    c2.setnumber(2, 9);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}