//decimal to bianry conversion
#include<iostream>
using namespace std;

int dec(int n){
     int  pow = 1, ans =0;
   while(n>0){
   int rem = n%2;
   n = n/2;
   ans = ans + (rem * pow);
   pow= pow *10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        cout<<dec(i)<<endl;
    }
    
    cout<<dec(5);
    return 0;
}
