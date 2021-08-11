#include <iostream>
#include <cstring>
using namespace std;

class chw
{
protected:
    string title;
    float rating;

public:
    chw(string s, float r)
    {
        title = s;
        rating = r;
    }
   virtual void display(){};
};
class chwvideo : public chw
{
    float videolength;

public:
    chwvideo(string s, float r, float vl) : chw(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
        cout<<endl;
    }
};
class chwtext : public chw
{
    int words;

public:
    chwtext(string s, float r, int w) : chw(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: "<< rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    title = ":-virtual function example";
    rating = 4.93;
    vlen   = 24.25;
    chwvideo djvideo(title ,rating,vlen);
 //   djvideo.display();


    title = ":-Django tutorial Text";
    rating = 4.12;
    words = 455;
    chwtext djtext(title ,rating,words);
//  djtext.display();

    chw *ptr[2];
    ptr[0]=&djvideo;
    ptr[1]=&djtext;

    ptr[0]->display();
    ptr[1]->display();
    
    return 0;
}
/*
Rules for virtual functions :-
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/