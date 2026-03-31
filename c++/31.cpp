//copy constructor

#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int n){
        a=n;
    }
    number(number &obj){
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }
    void show(){
        cout<<"the number for this object is" <<a<<endl;
    }
};

int main(int argc, char const *argv[])
{
    number x,y,z(23), z2;
    x.show();
    number z1(z);           //when there is no copy constructor found then compiler found its own copy constructor
    z1.show();    
    z2=z;
    z2.show();               // copy constructor does not invoked because z2 is pre defined

    number z3 =z;           //copy constructor invoked because we create the object in this line
    return 0;
}

