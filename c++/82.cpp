// queue         first in first out
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    queue<string> q;
    q.push("k");
    q.push("i");
    q.push("n");
    q.push("s");
    q.push("h");
    q.push("u");

    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}
