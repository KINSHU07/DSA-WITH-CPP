//given n strings print n strings in lexiographical order
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        s.insert(st);
    }
    for ( auto value : s)
    {
        cout<<value<<endl;
    }
    
    return 0;
}
