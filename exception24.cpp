#include <iostream>
using namespace std;

int main()
{
    try
    {
        int momage = 43;
        int sonage = 66;
        if (sonage > momage)
        {
            throw 99;
        }
    }
    catch (int x)
    {
        cout << "thos is true , Error num !! " << x << endl;
    }
}