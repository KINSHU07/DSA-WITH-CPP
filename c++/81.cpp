//stack       first in last out
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(2);           //adding a element in the stack
    s.push(3);
    s.push(9);
    s.push(7);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();                 //removing a element in the stack
    }

    return 0;
}
