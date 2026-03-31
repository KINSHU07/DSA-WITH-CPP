// multiple inheritence

#include<iostream>
using namespace std;
// syntax

/*
class derived : visibility-mode base_class1, visibility-mode base_class2{
body of derived class

}*/

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int =a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int =b;
    }
};

class derived : public base1, public base2{
public:
void show(){
    cout<<"the value of base 1 "<<base1int<<endl;
cout<<"the value of base 2 "<<base2int<<endl;
cout<<"the value of base "<<base1int + base2int;
}
};

int main(int argc, char const *argv[])
{
    derived harry;
    harry.set_base1int(68);
    harry.set_base2int(1);
    harry.show();
    return 0;
}


// data __member
// base1int --->protected
// base2int ---> protected

// member is_function
// setbase1int()---> public
// setbase1int()---> public
// show()---> public