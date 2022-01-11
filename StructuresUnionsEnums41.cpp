#include<iostream>
using namespace std;

struct employee
{
    int Id;
    char colour ;
    float salary;
};
union money
{
    int rice;
    char car;
    float pound;
};

int main(){

    enum meal {breakfast , lunch ,dinner};
    meal t1 = breakfast;
    cout<<t1<<endl;
    cout<<(t1==1)<<endl;
    cout<<(t1==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    union  money m1;
    m1.rice = 76;
    m1.car = 't';
    cout<<m1.car<<endl;
    struct employee niranjan,honey,jem;
    niranjan.Id=4;
    niranjan.colour='g';
    niranjan.salary=1200000;

    cout<<niranjan.Id<<endl;
    cout<<niranjan.colour<<endl;
    cout<<niranjan.salary<<endl;
    
    return 0;
}