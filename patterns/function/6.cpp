//calculate binomial coefficient
#include<iostream>
using namespace std;

int factorial(int n){
    int pro=1;
    for (int i = 1; i <= n; i++)
    {
        pro = pro * i;

    }
    return pro;
}
int main(int argc, char const *argv[])
{
    //nCr = n!/r!(n-r)!
    //10C2 = 10!/2!(8!)
    int n;
    int r;
    cin>>n;
    cin>>r;
    
    int nCr = factorial(n)/ (factorial(r) * factorial (n-r));
    cout<<nCr;

    return 0;
}
