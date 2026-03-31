//maps
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string , int> m;
    m["kinshu"] =11;
    m["kins"] =111;
    m["kinu"] =1111;

    m.insert({"kinuuu", 21});
    m.emplace("kinsh", 123);

    for ( auto p: m)
    {
        cout<<p.first<<" "<<p.second<<" ";

    }
    cout<<endl;
    auto it = m.find("kinshu");
    if (it != m.end()) {
        cout << "\nFound: " << it->first << " => " << it->second << endl;
    } else {
        cout << "\nKey not found.\n";
    }
    

    return 0;
}
