#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    return (a + b + c);
}
int volume(int x)
{
    return (x * x * x);
}
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    

    cout<<"your sum is  = "<< sum(5,7,9)<<endl;
    cout<<"your cube volume is  = "<< volume(9)<<endl;
    cout<<"your cylinder volume is  = "<< volume(45,4)<<endl;
    cout<<"your rectangular volume is  = "<< volume(44,8,7)<<endl;

    return 0;
}