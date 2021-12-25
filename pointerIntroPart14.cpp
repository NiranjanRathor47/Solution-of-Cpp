#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* b=&a;

    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    
    int** c= &b;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    cout<<c<<endl;

    return 0;
}