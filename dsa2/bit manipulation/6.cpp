//clear the ith bit

#include<bits/stdc++.h>
using namespace std;

int clearithbit(int n , int i){
    return n & ~(1<<i);
}

int main(int argc, char const *argv[])
{
    cout<<clearithbit(4, 2);
    return 0;
}
