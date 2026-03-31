#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{1,2,3,4,5,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it;

    for (it= v.begin() ; it < v.end(); it++)
    {
        cout<<(*it)<<" ";

    }
    cout<<endl;
    // 3rd way to print this

    for(int value: v){
        cout<<value<<" ";
    }
    return 0;
}
