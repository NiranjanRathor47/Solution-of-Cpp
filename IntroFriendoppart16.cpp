#include <iostream>
using namespace std;

class bukyfirst
{
public:
    bukyfirst() { bukyvar = 0; }

private:
    int bukyvar;

    friend void bukysFriend(bukyfirst &bfo);
};

void bukysFriend(bukyfirst &bfo)
{
    bfo.bukyvar = 95;
    cout << bfo.bukyvar << endl;
}
int main()
{
    bukyfirst bob;
    bukysFriend(bob);
}