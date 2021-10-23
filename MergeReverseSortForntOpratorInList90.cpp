#include<iostream>
#include<list>
// => ALL OPREATORS ARE HERE 
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

    display(list1);
    // Removing Element in List
    // list1.pop_back();   // remove last element
    // list1.pop_front();    // remove fiest element
    // list1.remove(7);     //  remove a speacific element
    // list1.remove(1);

    // Sorting A list
  //  list1.sort();      //  sort a list => keep in right order of elements
  //  display(list1);
    list<int> list2(3);  // empty list of size 7.
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 76;
    iter++;
    *iter = 99;
    iter++;
    *iter = 6;

    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2);     // Merges two list
    cout<<"afetr merge List1 "<<endl;
    display(list1);

    list1.reverse();  // REverse a list elements 
    display(list1);

    return 0;
}