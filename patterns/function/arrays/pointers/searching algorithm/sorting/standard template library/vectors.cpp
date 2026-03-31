#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec={1,2,3};
    vec.push_back(4);   
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(47); 
    vec.pop_back();

    vec.erase(vec.begin()+3, vec.begin()+5);       //start included but end not 
    for(int val : vec){
        cout<<val<<" ";
    }


    //for accesssing 
    cout<<vec[2]<<" or "<<" "<<vec.at(2)<<endl;

    cout<<vec.front()<<" "<<vec.back();
    

    return 0;
}

