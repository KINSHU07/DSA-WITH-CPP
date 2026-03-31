// removing the last rightmost set bit

#include<iostream>
using namespace std;

int removeRightbit(int n){
    return n & (n-1);
}
int main(int argc, char const *argv[])
{
    cout<<removeRightbit(12);
    return 0;
}
