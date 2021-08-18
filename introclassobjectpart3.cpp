#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;
public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "value of a is  " << a << endl;
        cout << "value of b is  " << b << endl;
        cout << "value of c is  " << c << endl;
        cout << "value of d is  " << d << endl;
        cout << "value of e is  " << e << endl;
    }
};
void employee :: setdata(int a1, int b1, int c1)
{   a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee niranjan;
    niranjan.d = 45;
    niranjan.e = 92;
    niranjan.setdata(35, 8, 77);
    niranjan.getdata();
    return 0;
}
/*
#include <iostream>
using namespace std;

class omgclass
{
public:
    void sayingsome()
    {
        cout << "my class is awesome\n" << endl;
    }
};

int main()
{
    omgclass omgobject;
    omgobject.sayingsome();
    return 0;
}
*/