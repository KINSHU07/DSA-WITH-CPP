//maps - it basically stores a key value pair
//it is not continous
//we can not do it+1 here but we can do it++ here
//time complexity is logn
//every element is unique in the map
// insertion and accessing both have time complexityas log n


#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> m){
    cout<<m.size()<<endl;
    for(auto value :m){
        cout<<value.first<<" "<<value.second;
    }
}
int main(int argc, char const *argv[])
{
    map<int, string> m;
    m[1] = "abc";
    m[2]= "def";
    m[3] = "xyz";
    m.insert({4, "afd"});
    // map<int, string> :: iterator it;
    // for(it = m.begin(); it!=m.end();it++){
    //     cout<< (*it).first<<" "<<(*it).second;
    // }

    // for(auto value :m){
    //     cout<<value.first<<" "<<value.second;
    // }
    auto it = m.find(7);
    if(it != m.end()) {
        cout << it->first << " " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }
    // m.erase(it);
    // m.clear();          //it clear all the thing in map
    print(m);
    return 0;
}
