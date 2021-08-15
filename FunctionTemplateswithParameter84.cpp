#include <iostream>
using namespace std;

// float function(int x, int y)
// {
//     float avg = float (x + y) / 2;
//     return avg;
// }
// float function2(int x, float y)
// {
//     float avg = float (x + y) / 2;
//     return avg;
// }
template <class T1,class T2 >
float function(T1 a ,T2 b)
{ 
     float avg = float (a + b) / 2;
     return avg;
}
template <class T >
void swape(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float s;
    s = function(8, 7.6);
    printf("value of avg is %.2f\n",s);
    int x=3,y=1;
    swap(x,y);
    cout<<x<<" , "<<y<<endl;
    return 0;
}