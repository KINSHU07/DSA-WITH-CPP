#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(int a ){
  this->a = a;
    a = a;                       //it basicallhy through a garbagge value
    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(int argc, char const *argv[])
{
    A a;
    
    a.setdata(2);
    a.getdata();
    cout<<sizeof(a);
    return 0;
}
//this is a keyword which points towards an object which invokes the member function
//basically, this pointer points the objects which calls the member function