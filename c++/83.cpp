#include <bits/stdc++.h>
using namespace std;

string bal(string s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
            st.push(s[i]);
        } else {
            if (st.empty()) return "NO";
            char top = st.top();
            if ((s[i] == ')' && top == '(') ||
                (s[i] == ']' && top == '[') ||
                (s[i] == '}' && top == '{')) {
                st.pop();
            } else {
                return "NO";
            }
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << bal(s) << endl;
    }
    return 0;
}
