#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int sumrealcomlex(complex, complex);
    int sumimgcomlex(complex, complex);
};

class complex
{
    int a, b;
    //  friend int calculator ::sumrealcomlex(complex, complex);
    //  friend int calculator ::sumimgcomlex(complex, complex);

    friend class calculator;

public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "your complex num is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomlex(complex x, complex y)
{
    return (x.a + y.a);
}
int calculator ::sumimgcomlex(complex x, complex y)
{
    return (x.b + y.b);
}

int main()
{

    complex x, y;
    x.setnumber(3, 2);
    y.setnumber(7, 6);
    calculator cal;
    int res = cal.sumrealcomlex(x, y);
    cout << "your real complex num is " << res << endl;
    int resimg = cal.sumimgcomlex(x, y);
    cout << "your imgnary complex num is " << resimg << endl;

    return 0;
}