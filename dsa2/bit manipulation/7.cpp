//toggle the ith bit

#include<iostream>
using namespace std;

int toggle(int n , int i){
    return n ^ (1<<i);
}
int main(int argc, char const *argv[])
{
    cout<<toggle(13 , 1);
    return 0;
}

