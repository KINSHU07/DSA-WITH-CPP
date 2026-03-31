#include<iostream>
using namespace std;
void factorial(int n){
    int product =1;
    for (int i = 1; i < n+1; i++)
    {
        product = product *i;

    }
    cout<<product;
}
int main(int argc, char const *argv[])
{
    factorial(5);
    return 0;
}
