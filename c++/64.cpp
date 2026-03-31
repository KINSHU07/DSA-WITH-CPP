//vectors of vectors
#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& v){
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> v;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[1].push_back(10);                //its add 10 on the second vector
    v.push_back(vector<int> ());       //it create a empty vector

    for (int i = 0; i < v.size(); i++) {
        print(v[i]); 
    }

    return 0;
}
