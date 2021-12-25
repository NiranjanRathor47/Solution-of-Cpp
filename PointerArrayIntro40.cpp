#include<iostream>
using namespace std;

int main(){
    int marks[]={72,83,22,77};

     for(int i=0;i<4;i++)
      {
        cout<<marks[i]<<endl;
      }
    cout<<"\n"<<endl;
    int* p=marks;

    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p+1)<<endl;    
    return 0;
}