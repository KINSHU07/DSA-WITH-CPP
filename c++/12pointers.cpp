#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a =69;
    int*b =&a;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value at address of b"<<*b;

    return 0;
}
