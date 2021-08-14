/*#include <iostream>

using namespace std;

int volume(int i, int b, int h)
{
    return i * b * h;
}
int main()
{
    cout << volume(5, 6, 2) << endl;
    return 0;
}
*/
#include <iostream>

using namespace std;

int volume (int i =1,int b=1, int h=1);

int main()
{
    cout << volume() << endl;      //  cout << volume(9,5,2) << endl;
    return 0;
}
int volume(int i, int b, int h)
{
    return i * b * h;
}