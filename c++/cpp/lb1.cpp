#include<iostream>
using namespace std;
class hero{
    int health;
    int level;
    public:
   void  setdata(int a, int b){
        health=a;
        level=b;
    }

    void getdata(){
        cout<<"the level and health is "<<level <<" and "<<health<<endl;
    }
    hero(){
        cout<<"kinshu keshri called constructor"<<endl;
    }
};

int main(int argc, char const *argv[])
{
   // static memmory allocation
    hero a;                                  //constructor called statically
    a.setdata(90,2);
    a.getdata();

    //dynamic memmor allocation
    hero *b = new hero;                     //constructor called dynamically
    (*b).setdata(90,1);
    (*b).getdata();
    b->getdata();

    return 0;
}
