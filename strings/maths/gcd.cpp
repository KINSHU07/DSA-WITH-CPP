//find gcd of two numbers
#include<iostream>
using namespace std;

int gcd(int a , int b){
while(a > 0 && b > 0){
    if (a> b )
    {
        a = a%b;
    } else{
        b = b%a;
    }
  
} 
return (a == 0) ? b : a;
}

int main(int argc, char const *argv[])
{
cout<<gcd(20, 28);
    return 0;
}
