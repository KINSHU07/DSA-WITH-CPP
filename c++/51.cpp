//pure virtual function are used to make abstract base class
//pure virtual function does not run in a code, it need to be overwrite in the code


//abstract base class is a class whcih is not used to create objects. it is used to for only inheritence 
//abstract base class is a class in which there is a atleast on virtual function

#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() =0;    //pure virtual function         we need to overwrite this in the further code
                            
};
 
class cwhvideo : public cwh
{
    float videolength;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "title: " << title << endl;
        cout << "rating: " << rating << endl;
        cout << "length: " << videolength << endl;
        cout<<endl;
    }
};
class cwhwords : public cwh
{
    int wordcount;

public:
    cwhwords(string s, float r, int wc) : cwh(s, r)
    {
        wordcount = wc;
    }
    void display()
    {
        cout << "title: " << title << endl;
        cout << "rating: " << rating << endl;
        cout << "word count: " << wordcount << endl;
    }
};

int main()
{
   string title;
    float rating,vlen;
    int wordcount;

    title=" django tutorial";
    rating=3.4;
    vlen=5.56;
    cwhvideo  dj(title, rating , vlen);
    dj.display();

    

    title=" django tutorial text";
    rating=4.2;
    wordcount=433;
    cwhwords tx(title, rating, wordcount);
    tx.display();

    cwh * tuts[2];
    tuts[0]= &dj;
    tuts[1]= &tx;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


/*
rules-:
they cannot be static
they are accessed by object pointers
virtual function can be a friend of another class
a virtual function in base class might not be used
if a virtual function defined in a base class, there is no neccessity of defining it in derived class(agar derived class meh defined nhi hai toh woh base class wala display run kr legA    ) 
*/