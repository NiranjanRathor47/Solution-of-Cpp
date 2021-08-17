#include<iostream>
using namespace std;

class employee
{
    public:
        int id;
        float salary;
        employee(int inpid)
        {
            id=inpid;
            salary =45.2;
        }
    employee(){}
};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/
class programmer : public employee
{
    public:
    int languageCode;
    programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    employee niranjan(3),harry(6);
    cout << harry.salary << endl;
    cout << niranjan.salary << endl;
    programmer skillf(10);
    cout << skillf.languageCode<<endl;
    cout << skillf.id<<endl;
    skillf.getData();
    return 0;
}