//check if a number is power of 2 or not

#include<iostream>
using namespace std;

bool ischeck(int n){
    return (n & (n-1))== 0;
}

int main(int argc, char const *argv[])
{
    cout<<ischeck(32);
    return 0;
}
