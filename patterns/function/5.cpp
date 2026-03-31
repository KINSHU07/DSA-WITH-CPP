//sum of the digits of a number
#include<iostream>
using namespace std;

void dsum(int n){
    int sum =0;
    while (n>0)
    {
        int last = n%10;
        n = n/10;
        sum = sum +last;

    }
    cout<<sum<<endl;

}
int main(int argc, char const *argv[])
{
    dsum(123333444);
    return 0;
}

