#include <iostream>
#include <fstream>
using namespace std;

int getwhattheywant();
void displayitems(int x);

int main()
{
    int whattheywant;

    whattheywant = getwhattheywant();

    while (whattheywant != 4)
    {
        switch (whattheywant)
        {
        case 1:
            displayitems(1);
            break;
        case 2:
            displayitems(2);
            break;
        case 3:
            displayitems(3);
            break;
        }
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

void displayitems(int x)
{
    ifstream objectfile("object.txt");

    string name;
    double power;

    if (x == 1)
    {
        while (objectfile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if (x == 2)
    {
        while (objectfile >> name >> power)
        {
            if (power > 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if (x == 3)
    {
        while (objectfile >> name >> power)
        {
            if (power < 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
}