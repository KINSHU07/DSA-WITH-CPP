//check if a number is prime or not
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    bool isprime= true;
    for (int i = 2; i*i <=n; i++ )
    {
        if (n%i == 0)
        {
    //     cout<<"is not prime";
    //    }
    //    else
    //    {
    //     cout<<"is prime";
    //    }
       isprime = false;
       break;
    }
}
if (isprime = true)
{
    cout<<"prime";
}else
{
    cout<<"not prime";
}


    cout<<endl;
    return 0;
}
