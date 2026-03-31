#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    cout<<"size: " <<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}


int main(int argc, char const *argv[])
{
    vector<int> v;
    cout<<v.size();
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        printvec(v);
    }
    printvec(v);
    return 0;
}
