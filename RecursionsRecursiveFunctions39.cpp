#include <iostream>
using namespace std;

/* int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << "plzz enter a num"<< endl;
    cin >> n;
    cout << "your factorial is  = "<< factorial(n) << endl;
    return 0;
} */
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n - 1);
    }
}
int main()
{
    int n;
    cout << "plzz enter a num"<< endl;
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        cout<< fib(i)<<" ";
    }
    return 0;
}