#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream objectfile("object.txt");
    cout << "enter name , power\n"<< endl;
    cout << "plzz press ctrl + z for quit"<< endl;

    string name;
    double power;
    while (cin >> name >> power)
    {
        objectfile << name << ' ' << power << endl;
    }
}