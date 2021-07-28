#include <iostream>
using namespace std;

class shop
{
  int id;
  float price;

public:
  void setdata(int a, float b)
  {
    id = a;
    price = b;
  }
  void getdata(void)
  {
    cout << "code of this item is " << id << endl;
    cout << "price of this item is " << price << endl;
  }
};
        // 1 2 3
        //     ^
        //     |
        //     |
        //     ptr
        // ptrTemp
int main()
{
  int size = 3;
  shop *ptr = new shop[size];
  shop *ptrtemp = ptr;
  // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. general store item
    // 2. veggies item
    // 3. hardware item

  int i, p;
  float q;
  for (i = 0; i < size; i++)
  {
    cout << "enter id and price of item " << i + 1 << endl;
    cin >> p >> q;
    ptr->setdata(p, q);
    ptr++;
  }
  for (i = 0; i < size; i++)
  {
    cout << "item num " << i + 1 << endl;
    ptrtemp->getdata();
    ptrtemp++;
  }
  return 0;
}