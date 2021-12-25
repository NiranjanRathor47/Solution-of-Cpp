#include<iostream>
using namespace std;

class baseclass {
    public: 
          int var_base;
          void display(){
             cout<<"displaying base class variable var_base "<<var_base<<endl;
          }      
};
class derivedclass : public baseclass{
         public:
            int var_derived;
            void display(){
                cout<<"displaying base class variable var_base "<<var_base<<endl;
                cout<<"displaying derived class variable var_base "<<var_derived<<endl;
            }
};

int main(){
    baseclass *baseclass_pointer;
    baseclass obj_base;
    baseclass_pointer = &obj_base;
    //   baseclass_pointer = &obj_derived;
    baseclass_pointer -> var_base=54;
    baseclass_pointer->display();
    baseclass_pointer->var_base = 3400; 
    baseclass_pointer->display();
    cout<<endl;
    derivedclass *derivedclass_pointer;
    derivedclass obj_derived;
    derivedclass_pointer = &obj_derived;
    derivedclass_pointer->var_base=88;
    derivedclass_pointer->var_derived=23;
    derivedclass_pointer->display();
    return 0;
}