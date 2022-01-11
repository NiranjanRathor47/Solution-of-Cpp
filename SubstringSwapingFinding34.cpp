#include <iostream>
#include <string>
using namespace std;

int main()
{
     string s1("omg this is amazing thing");
    {
        cout << s1.substr(15, 8) << endl;           // for substring
    }

    /* string one("apple  ");
    string two("brave  ");

    cout << one << two << endl;
    one.swap(two);                      // for swaping
    cout << one << two << endl; */

   /* string s1("ham is sps oh yes i am!");

    cout << s1.rfind("am") << endl;*/

    return 0;
}