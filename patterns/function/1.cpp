#include<iostream>
using namespace std;
int print(){
    cout<<"hello!";
    return 3;
}
int main(int argc, char const *argv[])
{
    int val = print();
    cout <<val;
    return 0;
}
