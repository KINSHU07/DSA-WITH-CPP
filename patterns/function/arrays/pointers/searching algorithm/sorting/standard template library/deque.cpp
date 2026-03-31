#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(int argc, char const *argv[])
{
    deque<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);

    for(int j : l){
        cout<<j <<" ";
    }

    cout<<l[2];          //we can do that in deque as it is dynamic arrays
    cout<<endl;
    return 0;
}

