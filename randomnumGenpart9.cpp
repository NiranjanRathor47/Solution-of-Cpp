#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    int i;

   // srand(584);  important

    for (i = 1; i <= 25; i++)
    {
        cout << rand() % 6 << endl;
    }
    return 0;
}