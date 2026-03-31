#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    pair<int , string> p_array[3];
    int a[] = {1,2,3};
    string b[] = {"kinshu", "ronaldo", "ramos"};
    p_array[0]= {1, "kinshu"};
    p_array[1]= {2, "ronaldo"};
    p_array[2]= {3, "ramos"};

    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first <<" "<<p_array[i].second<<endl;
    }

    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first <<" "<<p_array[i].second<<endl;
    }
    
    return 0;
}
