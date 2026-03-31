// function overloading
#include<iostream>
using namespace std;
class add{
    public:
    void sum(int a, int b){
        cout<<a+b<<endl;
    }
    void sum(int a, int b, int c){
        cout<<a+b<<endl;
    }
    void sum(string a, string b){
        cout<<a+b<<endl;
    }
};
int main(int argc, char const *argv[])
{
    add a;
    a.sum(2,3);
    a.sum("kinshu", "keshri");

    return 0;
}
