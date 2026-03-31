#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"tell me your age";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are adult"<<endl;
        break;
    case 2:
        cout<<"you are child"<<endl;
        break;
    case 60:
        cout<<"you are old"<<endl;
        break;
    
    default:
    cout<<"no special cases";
        break;
    }

    cout<<"age is just a number";
    return 0;
}
