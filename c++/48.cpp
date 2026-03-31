//RUN TIME POLYMORPHISM

#include<iostream>
using namespace std;

class base{
    public:
    int var1;
void display(){
    cout<<"the value of base variable is "<<var1<<endl;
}
};

class derived: public base{
    public:
    int var2;
    void display(){
        cout<<"the value of derived variable is "<<var2<<endl;
        cout<<"the value of base variable is "<<var1<<endl;
    }
};

int main(int argc, char const *argv[])
{
    base * basepointer;
    base obj1;
    derived obj2;
    basepointer = &obj2;                //base class pointer  pointing derived class object

    basepointer->var1=69;
    basepointer->display();              //poiinter jis class ke liye define hai ussi class ka function ko run krega

  //  basepointer->var2=132;              will throw an error, because we can only acces the member of base class as this is a base class poointer
    derived * derivedpointer;
    derivedpointer = &obj2;
    derivedpointer->var1=6;
    derivedpointer->var2=9;
    derivedpointer->display();  
  return 0;
}
