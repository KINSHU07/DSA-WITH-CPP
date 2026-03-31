//reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;

void deletemid(stack<char> &s ,int count, int size){
   
   
if(count == size/2){
s.pop();
return;
}
    int num = s.top();
    s.pop();

    //recurcive call
    deletemid(s, count+1, size);
    s.push(num);
}


int main(int argc, char const *argv[])
{
    string str = " babbar";
    stack<char> s;

    for (int i = 0; i <str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch); 

        s.pop();
    }

cout<<ans<<endl;
deletemid(s, 3,5);
cout<<ans<<endl;

    return 0;
}
