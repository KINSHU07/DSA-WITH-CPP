/*
oreder of execution

case1_
class b: public a
first base class then derived class !
first a() then b()

case2_ 
class c : public a, public b
first base class then derived class 
first a() then b() then c()

case 3_
class c : public a, virtual public b
first virtual base class then base class then derived
first b() then a() then c() 
*/

#include<iostream>
using namespace std;
class base {
    int data;
    public:
    base(int i){
        data =i;
        cout<<"base class is called"<<endl;
    }
     void print1(void){
        cout<<"the value of data is: "<<data<<endl;
     }
};

class base2 {
    int data2;
    public:
    base2(int i){
        data2 =i;
        cout<<" base 2 is called: "<<data2<<endl;   
    }
    void print2(void){
        cout<<"the value of data is: "<<data2<<endl;
     }
};

class derived : public base, public base2{                 //if we change here it can change the order of the program
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d) : base(a), base2(b){
        derived1= c;
        derived2= d;
        cout<<"derived constructor called"<<endl;

    }
    void print3(void){
        cout<<"the value of derived1 "<<derived1<<endl;
        cout<<"the value of derived2 "<<derived2<<endl;
    }
};
int main(int argc, char const *argv[])
{
    derived harry(1,2,3,4);
    harry.print1();
    harry.print2();
    harry.print3();
    return 0;
}
