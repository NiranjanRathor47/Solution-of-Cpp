#include <iostream>
#include<fstream>
using namespace std;

int getwhattheywant();

int main()
{
    int whattheywant;

    whattheywant = getwhattheywant();

    while (whattheywant != 4)
    {
        whattheywant = getwhattheywant();
    }
}
int getwhattheywant()
{
    int choice;
    
    cout << "1 - the pains items" << endl;
    cout << "2 - the helpful items " << endl;
    cout << "2 - the harmfill items" << endl;
    cout << "3 - the quit items" << endl;

    cin >> choice;
    return choice;
}