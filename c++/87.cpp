//lower bound is basically the number itself if it is present on the vector or array , and number greater than that, that is present on the array 
//upper bound is basically the number greater than that number in the array or vector 
// time complexity log(n)
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    sort(a , a+n);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<endl;
    int p;
    cin>>p;
    int *ptr = lower_bound(a , a+n, p);
    if (ptr == (a+n))
    {
        cout<<"not found";
        return 0;
    }
    
    cout<<(*ptr)<<endl;
    return 0;
}
