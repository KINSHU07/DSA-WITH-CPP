//conditional statements
//find whether the character is lower and upper case
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    cin>>c;
    if (c <= 91 && c>= 65)
    {
        cout<<"uppercase";
    }
    else{
        cout<<"lowercase";
    }
    return 0;
}
