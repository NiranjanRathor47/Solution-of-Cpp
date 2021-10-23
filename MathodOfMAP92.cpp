#include<iostream>
#include<string>
#include<map>
using namespace std;

//   Map is a associative array
int main(){
    map<string,int>marksmap;
    marksmap["harry"] = 98;
    marksmap["jonh"] = 74;
    marksmap["sem"] = 15;
    
    marksmap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    map<string,int> :: iterator iter;
    for (iter= marksmap.begin(); iter!=marksmap.end(); iter++)
    {
       cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"the size is  "<<marksmap.size()<<endl;
    cout<<"the maxsize is "<<marksmap.max_size()<<endl;
    cout<<"the empty return value is  "<<marksmap.empty()<<endl;
    return 0;
}