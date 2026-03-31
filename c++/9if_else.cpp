#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"tell me your age!?";
    cin>>age;
    if (age<18)
    {
        cout<<"you are not come to my party";
    }
    else if (age==18)
    {
        cout<<"you are invited but get a kid pass";
    }
    else
    {
        cout<<"you came to party";
    }
    return 0;
}
