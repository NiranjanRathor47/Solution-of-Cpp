#include <iostream>
#include <string>
using namespace std;

class devclass
{
public:
    devclass(string z)
    {
        setname(z);
    }
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
private:
    string name;
};

int main()
{
    devclass bo("hello dude\n");
    cout << bo.getname();
    devclass bo2("what's going on");
    cout << bo2.getname();

    return 0;
}