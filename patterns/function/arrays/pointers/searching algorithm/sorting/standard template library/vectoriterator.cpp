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

    vector<int> :: iterator it;
    for(it = vec.begin() ; it != vec.end(); it++){
        cout<< *(it)<<" ";
    }

    cout<<endl;

    vector<int> ::  reverse_iterator itr;
    for(itr=     vec.rbegin() ; itr!= vec.rend(); itr++){
        cout<< *(itr)<<"   ";
    }

    cout<<endl;

    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout<< *(it)<<" ";
    }

    return 0;
}
