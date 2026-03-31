#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};

class derived : protected base {


};

int main(int argc, char const *argv[])
{
    base b;
    derived d;
    // cout<<d.a:               not print because it belongs to protected class
    return 0;
}
