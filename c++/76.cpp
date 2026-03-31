//given N string and q query in each query there i a string print yes if string is avilable otherwise print No
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_set<string> o;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        o.insert(s);
    }
    int q;
    cin>>q;
    while (q++)
    {
        string s;
        cin>>s;
    
    if (o.find(s) == o.end())
    {
        cout<<"NO";
    }
    else{
        cout<<"yes";
    }
    }
    return 0;
}
