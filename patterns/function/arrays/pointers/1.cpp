#include<iostream>
using namespace std;

void changeA(int *ptr){
    *ptr = 20;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr= &a;

    int**Parptr = &ptr;

    changeA(&a);
    cout<<a<<endl;
    // cout<<&ptr<<endl;
    // cout<<Parptr<<endl;
    // cout<<**(Parptr)<<endl;
    return 0;
}
