#include<iostream>
using namespace std;

class bankdeposit
{
        int principal,year;
        float interestRate, returnvalue;
  public:
        bankdeposit(){};
        bankdeposit(int p ,int y ,float r);
        bankdeposit(int p,int y, int r);
        void show();
};
bankdeposit::bankdeposit(int p ,int y ,float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
       returnvalue = returnvalue*(1+interestRate);
    } 
}
bankdeposit::bankdeposit(int p ,int y ,int r)
{
    principal = p;
    year = y;
    interestRate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
       returnvalue = returnvalue*(1+interestRate);
    } 
}
void bankdeposit :: show()
{
    cout<<"principa amount was "<<principal<<" returnvalue after "<<year<<"  year is  "<<returnvalue<<endl;
}

int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y,R;
    float r;

    bd3.show();
    cout<<"enter value of p,y ,r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p,y,r);
    bd1.show();
    cout<<"enter value of p,y ,R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p,y,R);
    bd2.show();

    return 0;
}