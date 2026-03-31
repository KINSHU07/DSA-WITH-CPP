//iterators
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v{1,2,3,4,5,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
  cout<<endl;
  vector<int> :: iterator it = v.begin();
  cout <<(*it+1)<<endl;


  for (it= v.begin(); it !=v.end(); it++)

  {
    cout<< *it<<endl;
  }
  
    return 0;
}


//v.begin() points to the first element 
//v.end() points to the next to last element
