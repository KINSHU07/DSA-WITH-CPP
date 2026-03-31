#include <iostream>
using namespace std;

class base
{
public:
    int var1 = 2;
virtual void display() // if we use virtual then the function of the class which is pointed will be run
                           // agar virtual use krenge toh wahi function run hoga jis class ke object ko point kara hai
    {
        cout << "the value of base variable is " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2 = 3;
    void display()
    {
        cout << "the value of derived variable is " << var2 << endl;
        cout << "the value of base variable is " << var1 << endl;
    }
};
int main(int argc, char const *argv[])
{
    base *basepointer;
    base obj1;
    derived obj2;
    basepointer = &obj2;
    basepointer->display();
    return 0;
}
