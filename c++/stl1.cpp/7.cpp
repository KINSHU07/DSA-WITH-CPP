//priority queue
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(1);
    pq.push(0);
    pq.push(110);
    pq.push(102);

   while (!pq.empty())
   {
    cout<<pq.top()<<" ";
    pq.pop();
   }
   
    return 0;
}
