#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
        // hash[s[i] - 'a']++;      if hash for whole character
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a'];
    }
    
    return 0;
}
