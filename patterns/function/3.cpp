#include<iostream>
using namespace std;
int tsum(int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum +i;
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
   cout<< tsum(10);
    return 0;
}
