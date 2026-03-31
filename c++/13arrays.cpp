#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]= {12,32,21,31};
    for (int i = 0; i < 4; i++)
    {
    cout<<"the marks of student "<< i <<"is" <<a[i]<<endl;
    }
    int*p =a;
    cout<<"the calue of a[1] is "<<*p <<endl;
    cout<<"the calue of a[2] is "<<*(p+1) <<endl;
    cout<<"the calue of a[3] is "<<*(p+2) <<endl;
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
     cout<<*(++p)<<endl;

    return 0;
}
