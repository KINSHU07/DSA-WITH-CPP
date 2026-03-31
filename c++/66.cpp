//iterator of pairs
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{1,2,3,4,5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p{{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for (it = v_p.begin(); it!= v_p.end(); it++)
    {
        cout<< (*it).first <<" "<<(it->second)<<endl;         //*it,first is also written as 
    }
    return 0;
}
