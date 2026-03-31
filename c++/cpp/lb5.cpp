#include<iostream>
using namespace std;
class sum{
    public:
    void add(int a, int b, int c, int d=20){
        cout<<a+b+c+d;
    }
};
int main(int argc, char const *argv[])
{
    sum s;
    s.add(10,20,4);
    return 0;
}

