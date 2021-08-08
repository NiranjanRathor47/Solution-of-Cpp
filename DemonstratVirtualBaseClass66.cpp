#include<iostream>
using namespace std;

class student {
      protected:
           int roll_no;
     public:
         void setroll_no(int a)
         {
             roll_no =a;
         }
    void print_num(void){
        cout<<"your roll no. is "<<roll_no<<endl;
    }
};
class test : virtual public student{
        protected:
              float maths,physics;
        public:
               void set_marks(float m1, float m2){
                     maths = m1;
                     physics = m2;
               }
            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }       
};
class sports : virtual public student{
        protected:
              float score;
        public:
               void set_score(float sc){
                    score = sc;
               }
            void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
            }
};
class result : public test ,public sports{
        private:
             float total;
        public:
            void display (void){
            total = maths + physics + score ;
            print_num();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
            }
};

int main(){
    result niranjan;
    niranjan.setroll_no(6);
    niranjan.set_marks(99.5,78.3);
    niranjan.set_score(9.2);
    niranjan.display();
    return 0;
}