#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int* ptr = &a;
    cout<<"the value of a is  "<<*(ptr)<<endl;

    // new keyword
  //  int *p = new int(30);
    float *p = new float(85.35);
    cout<<"the value of a is  "<<*(p)<<endl;

    int* arr = new int[3];
    arr[0]  = 10;
     *(arr+1) = 20;
    arr[2]  = 8;

    // delete operator
    delete[] arr;
    cout<<"the value of arr[0] is  "<< arr[0]<<endl;
    cout<<"the value of arr[1] is  "<< arr[1]<<endl;
    cout<<"the value of arr[2] is  "<< arr[2]<<endl;
    return 0;
}