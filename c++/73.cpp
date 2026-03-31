// given n strings and q queries. in each query u re given a string print frequency of that string
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string , int> m;
    int n ; 
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>> s;
        m[s]++;
    }
    int q;
    cin>> q;
    while (q--)
    {
        string s; 
        cin>>s;
        cout<<m[s]++<<endl;
    }
    
    
    return 0;
}
