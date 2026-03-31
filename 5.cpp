//sum of all odd number from 1 to n
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int sum=0;
   
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2 != 0)
    //     {
    //         /* code */
    //          sum= sum +i;
    //     }
        
    //  }
    int i=0;

    while (i<=n)
    {
        if (i%2 != 0)
        {
            /* code */
             sum= sum +i;
            }
            i++;
    }
    
    
    cout<<sum<<endl;
    return 0;
}