//sets
#include<bits/stdc++.h>
using namespace std;
void print(set<string> s){
    for(auto value: s){
       cout << value <<endl;
    }
}

int main(int argc, char const *argv[])
{
    set<string> s;
    s.insert("abc");
    s.insert("bsa");
    s.insert("scx");
    s.insert("abc");            //set basically stores unique element only
    auto it = s.find("abc");
    if (it != s.end())
    {
        cout<<(*it);
    }
   
    if (it != s.end())
    {
        s.erase(it);
    }
    s.erase("bsa");
    
    for ( it = s.begin(); it != s.end(); it++)
    {
        cout<< *it<<endl;
    }
    print(s);
    
    return 0;
}
