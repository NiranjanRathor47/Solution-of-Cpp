#include<iostream>

using namespace std;

int printarray(int thearray[],int size)
{
    for(int x=0;x<size;x++)
    {
        cout<<thearray[x]<<endl;
    }

}

int main ()
{
     int A1[3] = {2,5,7};
     int A2[6] = {1,7,6,4,0,3};

     printarray(A2,6);

      return 0;
}