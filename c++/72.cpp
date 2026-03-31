//unordered maps
//difference is 
//time complexity       o(1)
//inbuilt function
//valid key datatypes
//in unordered maps values come in random order
// it follow hashing property for compilation
//here we can not use complex datatype as a key like pair , vectors only we can use that data only whose hashing is possible
#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
    cout<<m.size()<<endl;
    for (auto &value : m)
    {
        cout<<value.first <<" "<<value.second<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    unordered_map<int, string> m;
    m[1] = "abc";
    m[2] = "cde";
    m[3] = "def";
m.insert({4,"sdf"});
print(m);
    return 0;
}

