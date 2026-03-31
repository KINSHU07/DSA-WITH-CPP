#include<iostream>
#include<list>
using namespace std;
int main(int argc, char const *argv[])
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);

    for(int j : l){
        cout<<j <<" ";
    }

   // cout<<l[2];         it is double linked list so we cannot acces like that
    cout<<endl;
    return 0;
}

