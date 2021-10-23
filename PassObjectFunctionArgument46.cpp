#include<iostream>
using namespace std;

class complex 
{
   int a ,b;
   public:
        void setdata(int v1,int v2)
        {
            a = v1;
            b = v2;
        }
     void setdatabysum(complex x , complex y)
     {
         a = x.a + y.a;
         b = x.b + y.b;
     }
     void printnumber ()
     {
         cout<<"your complex num is "<<a<<" + "<<b<<"i"<<endl;
     }
};
int main(){

    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printnumber();

    c2.setdata(3,4);
    c2.printnumber();

    c3.setdatabysum(c1,c2);
    c3.printnumber();

    return 0;
}