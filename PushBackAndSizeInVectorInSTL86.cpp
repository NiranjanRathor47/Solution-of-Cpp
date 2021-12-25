#include<iostream>
#include<vector>
using namespace std;
 // concept of push_back ,pop_back and size
void display(vector<int>&v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
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
    vac1.pop_back(); //  remove last component
    display(vac1);
    return 0;
}