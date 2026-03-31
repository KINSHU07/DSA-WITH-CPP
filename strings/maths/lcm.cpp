//find lcm of two numbers
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
int k = gcd(20, 28);
int lcm =  int((20 * 28))/  k;

cout<<lcm<<endl;

    return 0;
}
