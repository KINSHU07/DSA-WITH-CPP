#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    for (int i=0; i <n; i++)
    {
        char ch= 'A';
        for (int j = 0; j<n; j++)
        {
            cout<<ch<<" ";
            ch = ch+1;
        }
        cout<<endl;
    }
    
    return 0;
}
