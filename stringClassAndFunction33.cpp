#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* string x;
    getline(cin, x);
    cout << x << endl;*/

    /*string s1("Niranjan ");
    string s2;
    string s3;

    s2 = s1;
    s3.assign(s1);

    cout << s1 << "\n "<< s2 <<"\n"<< s3 << endl;   */

    string s1="NiranjanRathor";
    cout<<s1.at(6)<<endl;

    for(int i=0;i<s1.length();i++)
    {
        cout<<s1.at(i);
    }
  
  return 0;
}