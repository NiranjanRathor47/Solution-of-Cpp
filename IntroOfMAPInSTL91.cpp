#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<string,int>marksmap;
    marksmap["harry"] = 98;
    marksmap["jonh"] = 74;
    marksmap["sem"] = 15;
    map<string,int> :: iterator iter;
    for (iter= marksmap.begin(); iter!=marksmap.end(); iter++)
    {
       cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    return 0;
}