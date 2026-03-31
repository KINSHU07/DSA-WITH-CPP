//staclk
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(0);
    s.push(34);
    s.push(23);
    s.push(54);
    s.push(32);
    s.push(2);

    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    
    stack<int> s1;
    s1.swap(s);
    cout<<s.size()<<endl;
    cout<<s1.size()<<endl;
    return 0;
}
