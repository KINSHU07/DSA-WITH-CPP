#include<iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
    multimap<string,int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 320);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl; 
    }
    
    m.erase(m.find("tv"));
    
    
        for(auto p : m){
            cout<<p.first<<" "<<p.second<<endl; 
        }
    return 0;
}
