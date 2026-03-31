//constructor overloading
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
   
    complex(int x, int y){              //it takes 2 parameter
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(){
        a=0;
        b=0;
    }
    void printnum(void){
        cout<<"the number is "<<a<<"+"<<b<<"i"<<endl;
    }
       
};
int main(int argc, char const *argv[])
{
    complex c1(4,7);
    c1.printnum();
    complex c2(4);
    c2.printnum();
    complex c3;
    c3.printnum();
    
    return 0;
}

