//unordered map
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string , int> m;
    m.emplace("kinshu ", 12);
    m.emplace("rashmi ", 12);
    m.emplace("ritika ", 12);

    for(auto p: m){
        cout<<p.first <<" "<<p.second<<" ";
cout<<endl;
    }
    return 0;
}
