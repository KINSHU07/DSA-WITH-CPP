#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);           // where a is the first element of the array !!!!!!!!!!!   a is the pointer // a+n is the the last element of the array
   for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
