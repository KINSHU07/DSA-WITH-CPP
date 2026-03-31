// arrays of vector

#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    cout<< "size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int N;                       //no. of vectors
    cin>> N;
    vector<int> v[N];                                      // array of vector
    for (int i = 0; i < N; i++)
    {
        int n;                                             //no. of arrays
        cin>> n;
        for (int i = 0; i < n; i++)
        {
            int s;                                      // no. of elements under each vectors
            cin>>s;
            v[i].push_back(s);
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        /* code */
        printvec(v[i]);
    }
    cout<< v[0][0];
    
    return 0;
}

//numbers of rows is fixed, but number of column is not fixed its dynamic