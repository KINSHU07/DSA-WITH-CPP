#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr= &a;

   cout<<ptr<<endl;
   ptr++;
   cout<<ptr<<endl;
  ptr--;
   cout<<ptr<<endl;

ptr+=2;  // add 2 integer value in the address means 8 byte of memmory
   cout<<ptr<<endl;
    return 0;
}
