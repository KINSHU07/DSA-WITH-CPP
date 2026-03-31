#include<iostream>
using namespace std;
class base{
    public:
    void say(){
        cout<<"sergio ramos is the best"<<endl;
    }
};

class derived: public base{
    public:
    void say(){
        cout<<"ronaldo is the GOAT"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    base b;
    derived d;
    b.say();
    d.say();
    return 0;
}
//automatic ambiguity resolution because derived say() is more preferable than base say()