#include<iostream>
using namespace std;

class employee
{
private:
    int id;
    int salary;
public:
      void setid (void)
      {
          cout<<"enter employee id ="<<endl;
          cin>>id;
      }
      void getid (void)
      {
          cout<<"the id of employee is  ="<<id<<endl;
      }
};

int main(){
    employee fb[100];
    for ( int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}