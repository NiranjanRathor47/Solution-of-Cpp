#include <iostream>
using namespace std;

class y;
class x
{
    int data;
    friend void swap(x &, y &);
public:
    void setdata(int value)
    {
        data = value;
    }
    void display(void)
    {
        cout << data << endl;
    }
};
class y
{
    int num;
    friend void swap(x &, y &);
public:
    void setdata(int value)
    {
        num = value;
    }
    void display(void)
    {
        cout << num << endl;
    }
};
void swap(x & c1, y & c2)
{
    int tmp = c1.data;
    c1.data = c2.num;
    c2.num = tmp;
}
int main()
{
    x oc1;
    y oc2;

    oc1.setdata(54);
    oc2.setdata(72);

    swap(oc1, oc2);

    oc1.display();
    oc2.display();

    return 0;
}