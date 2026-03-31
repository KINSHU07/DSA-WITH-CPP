#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> s;
    s.push(3);
    s.push(8);
    s.push(5);
s.push(9);

while(!s.empty()){
cout<<s.top()<<" ";
s.pop();

}
    
    
    return 0;
}
