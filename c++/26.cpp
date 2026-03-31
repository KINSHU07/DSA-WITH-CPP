//parameterized constructor
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int, int);
    void printnum(void){
        cout<<"the number is "<<a<<"+"<<b<<"i"<<endl;
    }
       
};
complex:: complex(int x, int y){              //it takes 2 parameter
    a=x;
    b=y;
}
int main(int argc, char const *argv[])
{    
    //implict call
    complex k(4,5);
    k.printnum();

    // explict call
    complex b = complex(2,3);
    b.printnum();
    return 0;
}