#include <iostream>
using namespace std;

/* void swap (int* a , int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){  
    int a,b;
    cout<<"plzz enter value of a and b\n"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"value of a = "<<a<<"\n"<<"this value of b = "<<b<<endl;
    return 0;
}*/
int &swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "plzz enter value of a and b\n"<< endl;
    cin >> a >> b;
    swap(a, b) = 546;
    cout << "value of a = " << a << "\n"<< "this value of b = " << b << endl;
    return 0;
}