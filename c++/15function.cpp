#include<iostream>
using namespace std;
int sum(int a, int b){
int c = a+b;
return c;
}
int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"enter the first num"<<endl;
    cin>>a;
    cout<<"enter the second num"<<endl;
    cin>>b;
    cout<<"the sum is " <<sum(a,b);


    return 0;
}

