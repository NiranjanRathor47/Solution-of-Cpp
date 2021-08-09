#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "displaying This vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //  cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vac1;        // zero length vector
    vector<char> vac2(4);    //4-element character vector
    vector<char> vac3(vac2); //4-element character vector from vec2
    vector<int> vac4(6, 3);  //6-element vector of 3s
     // display(vac1);
     // vac2.push_back('s');
     // display(vac2);
    //  display(vac3);
    display(vac4);
    int element, size = 5;
    cout<<vac4.size();
    return 0;
}