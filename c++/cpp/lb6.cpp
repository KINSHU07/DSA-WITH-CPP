//operator overloading

#include<iostream>
using namespace std;
class B{
    public:
    int a, b;


    void operator+ (B &obj){
        int value1= this->a;
        int value2 = obj.a;
        cout<< value2 - value1<<endl;
    }

    void operator() (){
        cout<<"i am fucked up"<<"  "<<this->a<<endl;
    }
};

int main()
{
    B o1,o2;
    o1.a = 9;
    o2.a= 10;
    o2 + o1;

    o1();
    return 0;
}
