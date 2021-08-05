#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream thefile("player.txt");
    cout << "enter id num,name , money\n"<< endl;
    cout << "plzz press ctrl + z for quit"<< endl;

    int id;
    string name;
    double money;
    while (cin >> id >> name >> money)
    {
        thefile << id << ' ' << name << ' ' << money << endl;
    }
}