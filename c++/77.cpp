// multiset

#include <bits/stdc++.h>
using namespace std;

void print(const multiset<string>& s) {
    cout << "size: " << s.size() << endl;
    for (const auto& value : s) {
        cout << value << endl;
    }
}

int main(int argc, char const *argv[]) {
    multiset<string> s;
    s.insert("acv");
    s.insert("asw");
    s.insert("qaw");
    s.insert("acv");               // Duplicate — allowed in multiset
    print(s);
    auto it = s.find("acv");
    if (it != s.end())
    {
        s.erase(it);               //it can only erase one value of acv by using iterator
    }
    print(s);
    
    s.erase("acv");                //it can erase all the value of acv directly
    print(s);
    
    
    return 0;
}
