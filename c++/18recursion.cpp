#include<iostream>
using namespace std;
int fibo(int n){
    if (n<=2)
    {
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    fibo(n);
    cout<<"the nth term of fibo series is"<<fibo(n);
    return 0;
}
