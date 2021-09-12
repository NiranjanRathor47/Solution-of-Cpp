#include<iostream>
#include<list>
using namespace std;

void display (list<int> &lst)
{
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;  // empty list of 0 length
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(11);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    display(list1);
    list<int> list2(3);  // empty list of size 7.
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 76;
    iter++;
    *iter = 99;
    iter++;
    *iter = 6;

    display(list2);

    return 0;
}