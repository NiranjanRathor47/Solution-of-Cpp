#include<iostream>
using namespace std;

class student {
     protected:
                int roll_num;
    public:
          void set_roll_num(int);
          void get_roll_num(void);
};
void student :: set_roll_num (int r)
{
    roll_num = r;
}
void student :: get_roll_num (void)
{
    cout<<"roll num is "<<roll_num<<endl;
}
class exam : public student {
    protected :
             float maths;
             float physics;
    public: 
           void set_mark(float,float);
           void get_mark(void);
};
void exam :: set_mark (float m1,float m2){
      maths = m1;
      physics = m2;
}
void exam :: get_mark (){
     cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
class result : public exam{
           float percentage;
    public:  
           void display ()
           {
               get_roll_num();
               get_mark();
               cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
           }
};
/*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */
int main(){
    result niranjan;
    niranjan.set_roll_num(24);
    niranjan.set_mark(99.0,96.0);
    niranjan.display();
    
    return 0;
}