//bounds for maps and set
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ;
    cin>> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);

    }
    int a;
    cin>>a;
    auto it = s.lower_bound(a);
    
    cout<<(*it);

    return 0;
}

