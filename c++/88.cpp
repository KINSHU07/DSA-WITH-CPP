// bounds for vector
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    sort(a.begin() , a.end());
    for (int i = 0; i < n; i++)
    {
        cout<< a[i];
    }
    cout<<endl;
    int p;
    cin>>p;
    auto it = upper_bound(a.begin() , a.end() , p );
    cout<<(*it) <<" ";
    return 0;
}
