//2d vector
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<vector<int>> mat = {{1,2,3},{2,3,4,11,21},{3,2,4}};
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            
            
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}


//for rowws = mat.size();
//for columns = mat[i].size()