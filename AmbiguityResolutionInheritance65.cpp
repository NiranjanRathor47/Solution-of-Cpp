#include<iostream>
using namespace std;

class base1
{
  public:
      void greet ()
      {
          cout<<"how are you"<<endl;
      }
};
class base2
{
  public:
      void greet ()
      {
          cout<<"kaise ho aap"<<endl;
      }
};
class derived : public base1,public base2
{
     public: 
          void greet ()
          {
              base1  :: greet();
          }
};
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};

int main(){
     // Ambibuity 1
    //  base1 obj1;
    //  base2 obj2;
    //  obj1.greet();
    //  obj2.greet();

    //  derived d;
    //  d.greet();
    
    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}