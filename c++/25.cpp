#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);
    void printnum(void){
        cout<<"the number is "<<a<<"+"<<b<<"i";
    }
       
};
complex:: complex(void){
    a=10;
    b=20;
}
int main(int argc, char const *argv[])
{
    complex c1,c2,c3;
    c1.printnum();

    return 0;
}
//used to intialize the object 
// it should be declared in the public section of the class
//they are automatically invoked whenever object is created
//they cannot return values or do not have return type
//it can have default argument
//we cannot refered to the address
