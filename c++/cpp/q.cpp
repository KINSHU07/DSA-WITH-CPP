#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >>s;
        stack<int> st;
        int n = s.size();
        for( int i =0; i<n; i++)
        {
            if(s[i] == '{' || s[i] == '('|| s[i] == '[' )
            {
                st.push(s[i]);
            }
            else{
                if((st.top()=='(' && s[i]== ')') ||( st.top()=='{' && s[i]== '}' )|| (st.top()=='[' && s[i]== ']')) st.pop();
            }

        }
        if(st.empty()) return "YES";
        return "NO";
    }
}