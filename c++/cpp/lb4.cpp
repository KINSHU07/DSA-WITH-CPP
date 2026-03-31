#include<iostream>
using namespace std;
class students{
    int id;
    string name;
    public:
    
    void setdata(int a, string b){
        id = a;
        name= b;
    }
    void getdata(){
        cout<<"the id and name is "<<name<<","<<id<<endl;
    }

    void setname(string name){
        this->name = name;
    }
    void getname(){
        cout<<name<<endl;
    }
};
int main(int argc, char const *argv[])
{
    students s1,s2;
    s1.setdata(1,"kinshu");
    s1.getdata();

    s2.setname("keshri");
    s2.getname();


    return 0;
}
