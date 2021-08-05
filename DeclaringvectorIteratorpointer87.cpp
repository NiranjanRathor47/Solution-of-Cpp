#include<iostream>
#include<vector>
using namespace std;
 // concept of Declaring a vector iterator(pointer)(point a element)
void display(vector<int>&v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>vac1;
    int element , size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
      cout<<"Enter an element to add to this vector: ";
      cin>>element;
      vac1.push_back(element);
    }
   // vac1.pop_back(); //  remove last component
   display(vac1);
    vector<int> :: iterator iter = vac1.end();    // point a iterator at begin(imp)
   vac1.insert(iter,566);
 //  vac1.insert(iter+1,566);     // Iter is a pointer.
   // vac1.insert(iter+1,5,566);      
    display(vac1);
    return 0;
}