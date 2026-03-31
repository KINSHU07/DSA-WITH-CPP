#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(3);
    s.push(8);
    s.push(5);

    cout<<s.top()<<endl;

    while (!s.empty())
    {
        cout<<s.top()<<" ";
       s.pop();
    }
    cout<<endl;

    stack<int> s1;
    s1.swap(s);
    cout<<s.size()<<endl;
    cout<<s1.size()<<endl;

    return 0;
}
