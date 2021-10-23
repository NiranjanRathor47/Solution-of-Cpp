#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1, num2;
        cin >> num1 >> num2;

        if (num2 == 0)
        {
            throw 0;
        }
        cout << num1 / num2 << endl;
    }
    catch (int x)
    {
        cout << "you can not divided by  " << x << endl;
    }
}