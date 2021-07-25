#include <iostream>
using namespace std;

class enemy
{
public:
    virtual void attack()=0;       // we can do like this => {cout<<"yes I am a class"<<endl;};
};
class ninja : public enemy
{
public:
    void attack()
    {
        cout << "ninja attack !!" << endl;
    }
};
class monstar : public enemy
{
public:
    void attack()
    {
        cout << "monstar attack !!" << endl;
    }
};
int main()
{
    ninja n;
    monstar m;
    enemy *enemy1 = &n;
    enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();

    return 0;
}