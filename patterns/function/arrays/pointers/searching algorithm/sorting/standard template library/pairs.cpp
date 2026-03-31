#include<iostream>
#include<list>
#include<vector>

using namespace std;
int main(int argc, char const *argv[])
{
    pair<int , int> p ={1,2};
    cout<<p.first<<" "<<p.second;
cout<<endl;


    vector<pair<int,int>> vec = {{1,2},{3,4},{4,5}};
    for(auto l : vec){
        cout<<l.first<<" "<<l.second<<endl;
    }
    
    vec.push_back({5,7});          
    vec.emplace_back(4,5);
    for(auto l : vec){
        cout<<l.first<<" "<<l.second<<endl;
    }

    return 0;
}

