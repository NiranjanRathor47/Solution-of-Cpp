#include <iostream>
using namespace std;

template <class t>
class dev
{
    t first, second;
    public : dev(t a, t b)
    {
        first = a;
        second = b;
    }
    t bigger();
};
template <class t>
t dev<t>::bigger()
{
    return (first > second ? first : second);
}
int main ()
{
    dev <int>bo(45,9);
    cout<<bo.bigger()<<endl;

    return 0;
}