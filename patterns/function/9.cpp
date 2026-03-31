//wap to reverse a number
#include<iostream>
using namespace std;

int rev(int n){
    int sum = 0;
    while (n >0)
    {
       int rem = n%10;
       sum = sum *10 + rem;
       n = n/10;

    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    cout<<rev(num);
    return 0;
}
