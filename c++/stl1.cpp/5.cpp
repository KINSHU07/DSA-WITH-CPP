//exception handling
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a =10, b=0;
    int c;
    try
    {
        if (b== 0)
        throw "divided by zero error";
        c= a/b;
    cout<<c<<endl;
    }
    catch(const char *e)
    {
        cout<<"exception occur"<<endl<<e;
    }
   

    return 0;
}