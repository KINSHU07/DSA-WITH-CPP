#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    v.push_back(2);
    }
int main(int argc, char const *argv[])
{
    vector<int> v(10, 20);
    v.push_back(9);
    v.pop_back();                    //removes the last element of the vector
    vector<int> &v1= v;               //it create a simple exact copy, but the time complexity is O(n)
    printvec(v);
    printvec(v);
    printvec(v1);
    return 0;
}
