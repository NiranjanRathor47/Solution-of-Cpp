#include<iostream>
using namespace std;

class complex {
         int real, imgnary;
    public:
         void getdata ()
         {
            cout<<"the value of real part is "<<real<<endl;
            cout<<"the value of imgnary part is "<<imgnary<<endl;
         }
         void setdata(int a ,int b){
             real =a;
             imgnary =b;
         }
};

int main(){
   // complex c1;/
    // complex *ptr;
   complex *ptr = new complex;
   // (*ptr).setdata(1,4);
   // (*ptr).getdata();
    ptr->setdata(1,4);
    
    ptr->getdata();
    return 0;
}