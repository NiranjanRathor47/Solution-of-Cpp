#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "plz enter a num \n"<< endl;
    cin >> age;
    switch (age)
    {
    case 20:
        cout << "yes boss !!" << endl;
        break; 
    case 42:
        cout << "ok goodby !!" << endl;
        break;
    case 18:
        cout << " hello MR.!!" << endl;
        break;
    default:
        cout << " invalid input!!" << endl;
    }
    return 0;
}