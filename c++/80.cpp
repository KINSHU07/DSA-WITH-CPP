//here , ordering is basically on marks
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int , multiset<string>> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin>> name >> marks;
        m[-1 * marks].insert(name);

    }
    auto cur_it = --m.end();
    for(auto marks_student_pr : m){
        auto &student = marks_student_pr.second;
        int marks = marks_student_pr.first;
        for ( auto value : student){
            cout<<value <<" "<<-1 * marks <<endl;
        }
        
    }
    
    return 0;
}

