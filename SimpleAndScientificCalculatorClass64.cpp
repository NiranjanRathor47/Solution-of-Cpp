#include <iostream>
#include<math.h>
using namespace std;

class simplecal
{
    protected :
          int base1int,base2int;
    public:
          void setnum (int p,int q)
          {
              base1int = p;
              base2int = q;
          }
 void show()
    {
        cout << "the value of base1 is " << base1int << endl;
        cout << "the value of base2 is " << base2int << endl;
        cout << "the sum of these value is " << base1int + base2int << endl;
        cout << "the sub of these value is " << abs(base1int - base2int) << endl;
        cout << "the mul of these value is " << base1int * base2int << endl;
        cout << "the div of these value is " << (float) base1int / base2int << endl;
    }
};
class scientific_cal
{
    protected :
          int base1int,base2int;
    public:
        
        float a_ln, a_cos,a_sqrt,a_sin;
        
        void setnumber(int x, float y)
        {
          base1int=x;
          base2int=y;
        a_cos=cos(base2int);
        a_sin=sin(base2int);
        a_ln=log(base1int);
        a_sqrt=sqrt(base1int);
        }
       void display ();
 };
 void scientific_cal:: display()
        {
       cout<<"\n scientific calculator"<<endl;
        cout<<"the cosine value of a is="<<a_cos<<endl;
        cout<<"the sine value of a is="<<a_sin<<endl;
        cout<<"the log value of a is="<<a_ln<<endl;
        cout<<"the sqrt value of a is="<<a_sqrt<<endl;
        
        }
class hybridcal:public simplecal ,public scientific_cal
{ };

int main()
{
    hybridcal k;
    k.setnum(30,15);
    k.show();
    k.setnumber(25,(3.14/2));
    k.display();

    return 0;
}