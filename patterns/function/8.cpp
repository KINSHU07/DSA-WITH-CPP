//bin to dec
#include<iostream>
using namespace std;

int bin(int n){
    int ans =0;
    int pow =1;
    while (n>0)
    {
       int rem = n%10;
        ans = ans + (rem * pow);
        n = n/10;
        pow= pow * 2;

    }
    return ans;
}

int main(int argc, char const *argv[])
{
    cout<<bin(1000);
    return 0;
}
