//power 

#include<iostream>
using namespace std;

int power(int n){
    if (n==0)
    {
        return 1;/* code */
    }

    return 2 * power(n-1);
    
}
int main(int argc, char const *argv[])
{
    int n ;
    cin>> n;
    cout<<power(n);
    return 0;
}
