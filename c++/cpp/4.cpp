#include<iostream>
using namespace std;
class cricketers
{
public:
    string name;
    int runs;
    cricketers(string name, int runs){
        this->name=name;
        this->runs=runs;
    }
};

int main(int argc, char const *argv[])
{
    cricketers c1("VIRAT KOHLI", 25000);
    cricketers c2("ROHIT SHARMA", 18000);
    
    cout<<c1.name<<" "<<c1.runs<<" "<<endl;
    cout<<c2.name<<" "<<c2.runs<<" "<<endl;

    return 0;
}


