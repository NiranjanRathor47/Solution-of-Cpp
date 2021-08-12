#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float a;
    float p = 10000 ;
    float r = .01;
   // int n;
    //  cout<<"plz enter a num \n"<<endl;
    // cin >> n;

    for (int day = 1; day <= 20; day++)
    {
        a = p * pow(1 + r, day);
        cout <<day<<"---" << a << endl;
    }
    

    return 0;
}