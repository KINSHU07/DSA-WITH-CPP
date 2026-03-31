//nesting practice
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // map< pair<int, int> , int> m;
    // pair <int, int> p1,p2;
    // p1 ={1,2};
    // p2 = {3,4};
    // cout << (p1 <p2);

    map<pair<string,string> , vector<int>> m;
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        string sn, ln;
        int ct;
    cin>> sn >>ln >>ct;
    for (int i = 0; i < ct; i++)
    {
        int v;
        cin>>v;
        //now it becomes vector, we can perform any vector operation here
        m[{sn, ln}].push_back(v);          

    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<< full_name.first <<" "<<full_name.second;
        cout<< list.size()<<endl;
        for(auto &element : list){
            cout<<element << " ";
        }
        cout<<endl;
    }

    }
    


    return 0;
}
