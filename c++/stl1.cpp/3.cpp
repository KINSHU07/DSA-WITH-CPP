//maps
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string , int> m;
    m["kinshu"] = 90;
    m["k"] = 90;
    m["u"] = 90;
    m["kin"] = 90;
    m.insert({{"se", 12}  , {"aw", 12}});
    map<string , int> :: iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout<<(*it).first<< " "<<(*it).second<<endl;
    }
    



    return 0;
}
