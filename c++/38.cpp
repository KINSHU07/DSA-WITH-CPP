//ambugity

#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"how r u ?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho app ?"<<endl;
    }
};

class derived : public base1, public base2{
    int a;
public:
void greet(){
    base2 :: greet();                     //ambugity resolution 
}
};

int main(int argc, char const *argv[])
{
    derived d;
    base1 basee;
    base2 baseee;
    basee.greet();
    baseee.greet();
    d.greet();
    return 0;
}
