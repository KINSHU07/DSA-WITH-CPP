#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> s;
    s.push(3);
    s.push(8);
    s.push(5);

    cout<<s.front()<<endl;

    while (!s.empty())
    {
        cout<<s.front()<<" ";
       s.pop();
    }
    cout<<endl;

    stack<int> s1;
    s.pop();
    while (!s.empty())
    {
        cout<<s.front()<<" ";
       s.pop();
    }
    
    return 0;
}
